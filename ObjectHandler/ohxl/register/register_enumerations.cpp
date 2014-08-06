
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

// register functions in category Enumerations with Excel

void registerEnumerations(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohEnumeratedClass"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x11""ohEnumeratedClass"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2F""return the members of a given enumerated class."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohEnumeratedPair"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x10""ohEnumeratedPair"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""return the members of a given enumerated pair."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohEnumeratedType"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x10""ohEnumeratedType"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""return the members of a given enumerated type."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x17""ohListEnumeratedClasses"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x17""ohListEnumeratedClasses"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x22""list supported enumerated classes."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x15""ohListEnumeratedPairs"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x15""ohListEnumeratedPairs"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x20""list supported enumerated pairs."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x15""ohListEnumeratedTypes"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x15""ohListEnumeratedTypes"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x20""list supported enumerated types."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Enumerations with Excel

void unregisterEnumerations(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohEnumeratedClass"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x11""ohEnumeratedClass"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2F""return the members of a given enumerated class."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x11""ohEnumeratedClass"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohEnumeratedPair"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x10""ohEnumeratedPair"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""return the members of a given enumerated pair."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x10""ohEnumeratedPair"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohEnumeratedType"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x10""ohEnumeratedType"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0E""EnumId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""return the members of a given enumerated type."),
            // parameter descriptions
            TempStrNoSize("\x18""name of enumerated type."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x10""ohEnumeratedType"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x17""ohListEnumeratedClasses"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x17""ohListEnumeratedClasses"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x22""list supported enumerated classes."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x17""ohListEnumeratedClasses"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x15""ohListEnumeratedPairs"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x15""ohListEnumeratedPairs"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x20""list supported enumerated pairs."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x15""ohListEnumeratedPairs"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x15""ohListEnumeratedTypes"),
            // parameter codes
            TempStrNoSize("\x03""PP#"),
            // function display name
            TempStrNoSize("\x15""ohListEnumeratedTypes"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x07""Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x20""list supported enumerated types."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x15""ohListEnumeratedTypes"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

