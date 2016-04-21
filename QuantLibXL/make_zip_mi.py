
import sys
import os
import shutil
import datetime
import glob
import zipfile
import argparse
import re

QLXL = "QuantLibXL"
VERSION = "1.8.0"
QLXL_VERSION = QLXL + "-" + VERSION
ROOT_DIR = QLXL_VERSION + "\\"

class ZipFile:

    root = None
    zipFile = None

    def __init__(self, path, root):
        self.root = root
        self.zipFile = zipfile.ZipFile(path, "w", zipfile.ZIP_DEFLATED)

    def __del__(self):
        self.zipFile.close()

    def zip(self, sourcePath, targetPath = None):
        print sourcePath
        if targetPath is None:
            targetPath = self.root + sourcePath
        self.zipFile.write(sourcePath, targetPath)

    def zipGlob(self, path, excludeFiles = None):
        for fileName in glob.glob(path):
            if excludeFiles is not None:
                for r in excludeFiles:
                    if r.match(fileName):
                        continue
            print fileName
            self.zip(fileName)

class Selector:

    zipFile = None
    inputPath = None
    incDirs = None
    excDirs = None
    incFiles = None
    excFiles = None

    def __init__(self, zipFile, inputPath, incDirs=None, excDirs=None, incFiles=None, excFiles=None):
        self.zipFile = zipFile
        self.inputPath = inputPath
        self.incDirs = incDirs
        self.excDirs = excDirs
        self.incFiles = incFiles
        self.excFiles = excFiles
        self.process()

    def process(self):
        for root, dirs, files in os.walk(self.inputPath):
            root += "\\"
            for d in dirs:
                if self.excludeDir(d):
                    dirs.remove(d)
                    continue
            for f in files:
                if self.includeFile(f):
                    self.zipFile.zip(root + f)

    def excludeDir(self, d):
        if self.excDirs is not None:
            for r in self.excDirs:
                if r.match(d):
                    return True
        if self.incDirs is None:
            return False
        else:
            for r in self.incDirs:
                if r.match(d):
                    return False
        return True

    def includeFile(self, f):
        if self.excFiles is not None:
            for r in self.excFiles:
                if r.match(f):
                    return False
        if self.incFiles is None:
            return True
        else:
            for r in self.incFiles:
                if r.match(f):
                    return True
        return False

def prompt_exit(msg='', status=0):
    if msg:
        print msg
    if sys.platform == 'win32':
        raw_input('press any key to exit')
    sys.exit(status)

#DELETEME
def visit(params, dirname, names):
    zfile = params[0]
    exclude = params[1]
    strip = params[2]
    if strip:
        rootDir = dirname[len(strip):]
    else:
        rootDir = dirname
    for name in names:
        if exclude == name: continue
        sourcePath = dirname + "/" + name
        targetPath = rootDir + "/" + name
        zfile.write(sourcePath, ROOT_DIR + targetPath)

def makeZipMi():
    zipFilePath = "zip/%s-%s.zip" % (QLXL_VERSION, datetime.datetime.now().strftime("%Y%m%d%H%M"))
    zfile = zipfile.ZipFile(zipFilePath, "w", zipfile.ZIP_DEFLATED)

    # Zip up some specific files from the QuantLibXL directory.
    #zfile.write("Docs/QuantLibXL-docs-1.6.0.chm", ROOT_DIR + "Docs/QuantLibXL-docs-1.6.0.chm")
    zfile.write("xll/QuantLibXLDynamic-vc110-mt.xll", ROOT_DIR + "xll/QuantLibXLDynamic-vc110-mt.xll")
    zfile.write("zip/README.txt", ROOT_DIR + "README.txt")
    # Recursively zip some subdirectories of the QuantLibXL directory.
    #os.path.walk("Data", visit, (zfile, ".gitignore", None))
    os.path.walk("Data2/XLS/AUD", visit, (zfile, ".gitignore", None))
    os.path.walk("Data2/XLS/EUR", visit, (zfile, "EUR_YCSTDBootstrapping.xlsx", None))
    os.path.walk("Data2/XLS/GBP", visit, (zfile, "GBP_YCSTDBootstrapping.xlsx", None))
    os.path.walk("Data2/XLS/HKD", visit, (zfile, ".gitignore", None))
    os.path.walk("Data2/XLS/JPY", visit, (zfile, ".gitignore", None))
    os.path.walk("Data2/XLS/SEK", visit, (zfile, ".gitignore", None))
    os.path.walk("Data2/XLS/USD", visit, (zfile, "USD_YCSTDBootstrapping.xlsx", None))
    os.path.walk("framework", visit, (zfile, "ReadMe.txt", None))
    #os.path.walk("Workbooks", visit, (zfile, None, None))
    # Zip up some files from other projects in the repo.
    zfile.write("../ObjectHandler/xll/ObjectHandler-xll-vc110-mt.xll", ROOT_DIR + "xll/ObjectHandler-xll-vc110-mt.xll")
    #os.path.walk("../QuantLibAddin/gensrc/metadata", visit, (zfile, None, "../QuantLibAddin/gensrc/"))
    zfile.write("../XL-Launcher/bin/Addin/Launcher.xla", ROOT_DIR + "Launcher.xla")
    #zfile.write("../XL-Launcher/bin/Addin/session_file.HKD.xml", ROOT_DIR + "session_file.xml")
    for fileName in glob.glob("../XL-Launcher/bin/Addin/session_file.*.xml"):
        baseName = os.path.basename(fileName)
        if -1 != baseName.find("-dev") or -1 != baseName.find("-s") or -1 != baseName.find("public"): continue
        zfile.write("../XL-Launcher/bin/Addin/" + baseName, ROOT_DIR + baseName)
    for fileName in glob.glob("../XL-Launcher/bin/Addin/session_file.*.bat"):
        baseName = os.path.basename(fileName)
        if -1 != baseName.find("-dev") or -1 != baseName.find("-s") or -1 != baseName.find("public"): continue
        zfile.write("../XL-Launcher/bin/Addin/" + baseName, ROOT_DIR + baseName)

    zfile.close()

parser = argparse.ArgumentParser(description='zip up QuantLibXL')
parser.add_argument('-t','--target', help='target environment', required=True)
args = vars(parser.parse_args())

if 'mi' == args['target']:
    makeZipMi()
else:
    print "Error - unsupported target : " + args['target']

