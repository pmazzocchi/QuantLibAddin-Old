
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

#include <xlsdk/xlsdkdefines.hpp>

extern void registerEnumerations(const XLOPER&);
extern void registerGarbagecollection(const XLOPER&);
extern void registerGroup(const XLOPER&);
extern void registerLogging(const XLOPER&);
extern void registerObjects(const XLOPER&);
extern void registerOhutils(const XLOPER&);
extern void registerRange(const XLOPER&);
extern void registerSerialization(const XLOPER&);
extern void registerValueobjects(const XLOPER&);

extern void unregisterEnumerations(const XLOPER&);
extern void unregisterGarbagecollection(const XLOPER&);
extern void unregisterGroup(const XLOPER&);
extern void unregisterLogging(const XLOPER&);
extern void unregisterObjects(const XLOPER&);
extern void unregisterOhutils(const XLOPER&);
extern void unregisterRange(const XLOPER&);
extern void unregisterSerialization(const XLOPER&);
extern void unregisterValueobjects(const XLOPER&);

void registerOhFunctions(const XLOPER &xDll) {

        registerEnumerations(xDll);
        registerGarbagecollection(xDll);
        registerGroup(xDll);
        registerLogging(xDll);
        registerObjects(xDll);
        registerOhutils(xDll);
        registerRange(xDll);
        registerSerialization(xDll);
        registerValueobjects(xDll);

}

void unregisterOhFunctions(const XLOPER &xDll) {

        unregisterEnumerations(xDll);
        unregisterGarbagecollection(xDll);
        unregisterGroup(xDll);
        unregisterLogging(xDll);
        unregisterObjects(xDll);
        unregisterOhutils(xDll);
        unregisterRange(xDll);
        unregisterSerialization(xDll);
        unregisterValueobjects(xDll);

}

