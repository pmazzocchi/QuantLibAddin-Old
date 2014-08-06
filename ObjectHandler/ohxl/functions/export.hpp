
/*  
 Copyright (C) 2004, 2005, 2006 Eric Ehlers
 
 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#ifndef ohxl_export_hpp
#define ohxl_export_hpp

#ifdef _WIN64
#  define EXPORT_PREFIX
#else
#  define EXPORT_PREFIX "_"
#endif

#pragma comment (linker, "/export:" EXPORT_PREFIX "ohEnumeratedClass")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohEnumeratedPair")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohEnumeratedType")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohListEnumeratedClasses")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohListEnumeratedPairs")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohListEnumeratedTypes")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryCollectGarbage")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryDeleteAllObjects")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryDeleteObject")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryListObjectIDs")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryLogAllObjects")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryLogObject")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRepositoryObjectCount")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohGroup")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohGroupList")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohGroupSize")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohLogFile")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohLogLevel")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohLogSetFile")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohLogSetLevel")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohLogWriteMessage")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectCallerAddress")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectCallerKey")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectClassName")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectCreationTime")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectExists")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectIsOrphan")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectIsPermanent")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectPrecedentIDs")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectUpdateCounter")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectUpdateTime")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohBoostVersion")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohFilter")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohFunctionCount")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohPack")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRangeRetrieveError")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRemoveInvalidColumns")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRemoveInvalidRows")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRetrieveErrorImpl")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohStack")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohStringConcatenate")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohStringSplit")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohTrigger")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohVbaError")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohVersion")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohRange")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectLoad")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectLoadString")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectSave")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectSaveString")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectPropertyNames")
#pragma comment (linker, "/export:" EXPORT_PREFIX "ohObjectPropertyValues")


#endif

