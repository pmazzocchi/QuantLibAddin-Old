
################################################################################
#
# find_replace.py - perform a recursive find/replace on a directory tree
#
# To use this script, first edit it as required (see below) then invoke
# as follows:
#
# find_replace.py -[mode]
# Where [mode] is either of:
#        d - display proposed substitutions
#        s - perform the substitutions
# Plus optionally
#        v - verbose
#
# Settings within this script:
#
# ROOT_DIRS
# The list of root folders from which you want the find/replace to begin.
#
# SUBSTITUTIONS
# A list of one or more regexes to be performed on each file.
#
# INCLUDE_FILES
# Regexes to indicate names of files to be processed by the find/replace.
#
# IGNORE_FILES
# Regexes to indicate names of files to be ignored by the find/replace.
# NB the script tests first whether the file is to be ignored, then whether it
# is to be included.
#
# IGNORE_DIRS
# Regexes to indicate directories to be ignored by the find/replace.
#
################################################################################

import sys
import os
import re
import getopt
import shutil

# ROOT_DIRS - The list of root folders from which
# you want the find/replace to begin.
ROOT_DIRS = (
    '/home/erik/projects/QuantLibAddin-Old/log4cxx/src/main/include/log4cxx',
    '/home/erik/projects/QuantLibAddin-Old/gensrc',
    '/home/erik/projects/QuantLibAddin-Old/ObjectHandler',
    '/home/erik/projects/QuantLibAddin-Old/QuantLibAddin',
    '/home/erik/projects/QuantLibAddin-Old/QuantLibXL',
    #'C:/projects/QuantLibAddin-Old4/log4cxx',
    #'C:/projects/QuantLibAddin-Old4/gensrc',
    #'C:/projects/QuantLibAddin-Old4/ObjectHandler',
    #'C:/projects/QuantLibAddin-Old4/QuantLibAddin',
    #'C:/projects/QuantLibAddin-Old4/QuantLibXL',
    #'C:/projects/QuantLibAddin-Old4/XL-Launcher',
)

# CALLBACK FUNCTIONS - Called from regexes which require multiple passes

# Convert case
def toLower(m): return m.group(0).lower()

# Replace pre increment/decrement with post increment/decrement
regex1 = re.compile(r'(\w+?)\+\+')
regex2 = re.compile(r'(\w+?)--')
def callback_example(m):
    x = regex1.sub('++\1', m.group(2))
    x = regex2.sub('--\1', x)
    return m.group(1) + x + ')'

# SUBSTITUTIONS - A list of regexes to be performed.
# Each substitution is in the format
#   (re.compile('find text'), 'replace text'),

SUBSTITUTIONS = (

## Uncomment and modify the examples as required.

##  1) Simple
##  Straight find/replace.
#   (re.compile('aaa'), 'bbb'),

#   delete references to boost property files from vcxproj files.
#   (re.compile('<Import Project=".*boost_current.props" />'), ''),

#   delete references to Windows SDK from vcxproj files.
#   (re.compile('<WindowsTargetPlatformVersion>.*</WindowsTargetPlatformVersion>'), ''),

##  2) Group
##  Use parentheses to indicate group(s) in the find text.
##  Use \x in the replace text to refer to a group, where x = group number.
##  Replace text must be a raw string r'' instead of normal string ''.
#   (re.compile('ccc(.*)ccc'), r'ddd\1ddd'),

#   comment out references to boost property files from vcxproj files.
#   (re.compile('<Import Project="(.*)boost_current.props" />'),
#        r'<!--Import Project="\1boost_current.props" /-->'),

##  3) Newline flag
##  Use re.S to indicate that . matches newline.
##  This allows you to perform substitutions that span lines.
#   (re.compile('eee.*eee', re.S), 'fff'),

##  4) Multiline flag
##  Use re.M to anchor ^ and $ to begin/end of lines within buffer.
#   (re.compile('^ggg.*ggg$', re.M | re.S), 'hhh'),

##  5) Conversion function
##  Instead of replacement text, provide name of conversion function.
#   (re.compile('abcDEFghi'), toLower),

##  Frequently used

# TODO: include file ObjectHandler/dev_tools/notes.txt in the update

    (re.compile('1_20_0'), '1_21_0'),
    (re.compile('1\.20'), '1.21'),
    (re.compile('0x012000'), '0x012100'),
    (re.compile('R012000f0'), 'R012100f0'),
    #(re.compile('0\.10\.0f12'), '0.10.0f13'),
    #(re.compile('0x001000f12'), '0x001000f13'),

    #(re.compile('vc140'), 'vc141'),
)

# INCLUDE_FILES
# Regexes to indicate names of files to be processed by the find/replace.
# Leave this list empty to process all files in the directory tree
# except for those excluded by IGNORE_FILES.

INCLUDE_FILES = (

#    re.compile(r'^.+\.[ch]pp$'),
#    re.compile(r'^.+\.vcxproj$'),

)

# IGNORE_FILES
# Regexes to indicate names of files to be ignored by the find/replace.

IGNORE_FILES = (

    re.compile('^.+\.bmp$'),
    re.compile('^.+\.exe$'),
    re.compile('^.+\.exp$'),
    re.compile('^.+\.ico$'),
    re.compile('^.+\.jpg$'),
    re.compile('^.+\.la$'),
    re.compile('^.+\.lib$'),
    re.compile('^.+\.log$'),
    re.compile('^.+\.ncb$'),
    re.compile('^.+\.o$'),
    re.compile('^.+\.pdf$'),
    re.compile('^.+\.plg$'),
    re.compile('^.+\.png$'),
    re.compile('^.+\.pyc$'),
    re.compile('^.+\.xls$'),
    re.compile('^.+\.zip$'),
    re.compile('^.+~$'),
    re.compile('^\.'),

    re.compile('^aclocal\.m4$'),
    re.compile('^Announce\.txt$'),
    re.compile('^ChangeLog\.txt$'),
    re.compile('^changes\..+$'),
    re.compile('^config\.status$'),
    re.compile('^configure$'),
    re.compile('^design\.docs$'),
    re.compile('^history\.docs$'),
    re.compile('^install-sh$'),
    re.compile('^libtool$'),
    re.compile('^Makefile$'),
    re.compile('^Makefile\.in$'),
    re.compile('^News\.txt$'),
    re.compile('^NEWS\.txt$'),
    re.compile('^objecthandler\.cpp$'),
    re.compile('^ohfunctions\.cpp$'),
)

# IGNORE_DIRS
# Regexes to indicate directories to be ignored by the find/replace.

IGNORE_DIRS = (
    re.compile('^\.'),
    re.compile('^\.svn$'),
    re.compile('^autom4te\.cache$'),
    re.compile('^build$'),
    re.compile('^buildStatic$'),
    re.compile('^configure$'),
    re.compile('^dev_tools$'),
    re.compile('^framework$'),
    re.compile('^html$'),
    re.compile('^html-online$'),
    re.compile('^Launcher$'),
    re.compile('^lib$'),
    #re.compile('^log4cxx$'),
    re.compile('^Workbooks$'),
)

def prompt_exit(msg='', status=0):
    if msg:
        print msg
    #if sys.platform == 'win32':
    #    raw_input('press any key to exit')
    sys.exit(status)

def usage():
    prompt_exit('usage: ' + sys.argv[0] + ' -[mode]' + '''
where [mode] is either of:
        d - display proposed substitutions
        s - perform the substitutions
plus optionally
        v - verbose
''')

def logMessage(msg, priority = 1):
    global logLevel
    if priority <= logLevel:
        print msg

def ignoreItem(item, ignoreList):
    for r in ignoreList:
        if r.match(item):
            return True

def includeItem(item, includeList):
    if len(includeList) == 0: return True
    for r in includeList:
        if r.match(item):
            return True

def processFile(fullPath):
    global execSub
    f = open(fullPath, 'r')
    buf = f.read()
    bufNew = buf
    for sub in SUBSTITUTIONS:
        r, repl = sub
        bufNew = r.sub(repl, bufNew)
    if bufNew == buf:
        logMessage('no sub required in file ' + fullPath)
    else:
        if execSub:
            logMessage('*** overwriting file ' + fullPath, 0)
            f = open(fullPath, 'w')
            f.write(bufNew)
        else:
            logMessage('*** sub required in file ' + fullPath, 0)

def processDir(ignore, dirPath, nameList):
    i = len(nameList) - 1
    while i > -1:
        name = nameList[i]
        fullPath = os.path.join(dirPath, name).replace('\\', '/')
        logMessage('processing path ' + fullPath)
        if os.path.isdir(fullPath):
            logMessage('dir')
            if ignoreItem(name, IGNORE_DIRS):
                logMessage('ignoring directory ' + fullPath)
                del nameList[i]
        elif os.path.isfile(fullPath):
            if ignoreItem(name, IGNORE_FILES):
                logMessage('ignoring file ' + fullPath)
                del nameList[i]
            else:
                logMessage('testing filename ' + name)
                if includeItem(name, INCLUDE_FILES):
                    processFile(fullPath)
        else:
            prompt_exit('unknown file type: ' + fullPath)
        i -= 1

try:
    opts, args = getopt.getopt(sys.argv[1:], 'dsvh', 'help' )
except getopt.GetoptError:
    usage()

logLevel = 0
execSub = -1
for o, a in opts:
    if o in ('-h', '--help'):
        usage()
    elif o == '-d':
        execSub = 0
    elif o == '-s':
        execSub = 1
    elif o == '-v':
        logLevel = 1
if execSub == -1:
    usage()

for rootDir in ROOT_DIRS:

    if not os.path.isdir(rootDir):
        prompt_exit('invalid directory: ' + rootDir)

    os.path.walk(rootDir, processDir, None)

prompt_exit()

