'output calc source files'

import common
import utils

def generateFuncMap(functionGroups):
	fileMap = file(common.CALC_ROOT + common.CALC_MAPFILE, 'w')
	utils.printHeader(fileMap)
	fileMap.write(common.CALC_MAPHEADER)
	for groupName in functionGroups.keys():
		fileMap.write('\n\t//%s\n\n' % groupName)
		functionGroup = functionGroups[groupName]
		for function in functionGroup[common.FUNCLIST]:
			fileMap.write(common.CALC_MAPLINE \
				% (function[common.CODENAME], function[common.NAME]))
	fileMap.write('\n}\n')
	fileMap.close()

def generateAutoHeader(functionGroups):
	fileHeader = file(common.CALC_ROOT + common.CALC_AUTOHDR, 'w')
	utils.printHeader(fileHeader)
	for groupName in functionGroups.keys():
		fileHeader.write('#include <Addins/Calc/%s.hpp>\n' % groupName)
	fileHeader.write('\n')
	fileHeader.close()

def generateHeader(fileHeader, function, suffix):
	if function[common.HANDLE]:
		fileHeader.write('\t\tconst STRING & handle,\n')
	fileHeader.write(utils.generateParamList(function[common.PARAMS], \
		2, True, '', 'const STRING &', 'sal_Int32'))
	fileHeader.write(') THROWDEF_RTE_IAE%s\n' % suffix)

def getReturnTypeCalc(function):
	returnType = function[common.RETVAL][common.TYPE]
	if returnType == common.PROPVEC:
		return 'SEQSEQ(ANY)'
	elif returnType == 'string':
		return 'STRING'
	else:
		raise ValueError, 'unexpected return type: ' + returnType

def generateHeaders(functionGroups):
	for groupName in functionGroups.keys():
		functionGroup = functionGroups[groupName]
		fileHeader = file(common.CALC_ROOT + groupName + '.hpp', 'w')
		utils.printHeader(fileHeader)
		for function in functionGroup[common.FUNCLIST]:
			returnTypeCalc = getReturnTypeCalc(function)
			fileHeader.write('\tvirtual %s SAL_CALL %s(\n' \
				% (returnTypeCalc, function[common.CODENAME]))
			generateHeader(fileHeader, function, ';')
			fileHeader.write('\n')
	fileHeader.close()

def generateFuncSource(fileFunc, function):
	fileFunc.write('SEQSEQ( ANY ) SAL_CALL QLAddin::%s(\n' % function[common.CODENAME])
	generateHeader(fileFunc, function, ' {')
	if function[common.HANDLE]:
		handle = '\n\t\t\tOUStringToString(handle),'
	else:
		handle = ''
	paramList = utils.generateParamList(function[common.PARAMS], \
		3, False, '', '', '', 'OUStringToString(%s)')
	fileFunc.write(common.CALC_BODY % (\
		function[common.NAME],\
		handle,\
		paramList,\
		function[common.NAME]))

def generateFuncSources(functionGroups):
	for groupName in functionGroups.keys():
		functionGroup = functionGroups[groupName]
		if functionGroup[common.HDRONLY]:
			continue
		fileFunc = file(common.CALC_ROOT + groupName + '.cpp', 'w')
		utils.printHeader(fileFunc)
		fileFunc.write(common.CALC_INCLUDES)
		for function in functionGroup[common.FUNCLIST]:
			generateFuncSource(fileFunc, function)
		fileFunc.close()

def getReturnTypeCalcIDL(function):
	returnType = function[common.RETVAL][common.TYPE]
	if returnType == common.PROPVEC:
		return 'sequence < sequence < any > >'
	elif returnType == 'string':
		return 'string'
	else:
		raise ValueError, 'unexpected return type: ' + returnType

def generateIDLSource(functionGroups):
	fileIDL = file(common.CALC_ROOT + common.CALC_IDL, 'w')
	utils.printTimeStamp(fileIDL, '//')
	fileIDL.write(common.CALC_IDL_HEAD)
	for groupName in functionGroups.keys():
		fileIDL.write('\t\t\t\t// %s\n\n' % groupName)
		functionGroup = functionGroups[groupName]
		for function in functionGroup[common.FUNCLIST]:
			if function[common.HANDLE]:
				handle = '\t\t\t\t\t\t[in] string handle,\n'
			else:
				handle = ''
			returnTypeIDL = getReturnTypeCalcIDL(function)
			paramList = utils.generateParamList(function[common.PARAMS],\
				 6, True, '[in] ')
			fileIDL.write(common.CALC_IDL_FUNC % \
				(returnTypeIDL, function[common.CODENAME], handle, paramList))
	fileIDL.write(common.CALC_IDL_FOOT)
	fileIDL.close()

def generate(functionDefs):
	functionGroups = functionDefs[common.FUNCGROUPS]
	generateFuncMap(functionGroups)
	generateAutoHeader(functionGroups)
	generateHeaders(functionGroups)
	generateFuncSources(functionGroups)
	generateIDLSource(functionGroups)
