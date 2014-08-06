
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

// register functions in category Ohutils with Excel

void registerOhutils(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0E""ohBoostVersion"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x0E""ohBoostVersion"),
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
            TempStrNoSize("\x24""returns the version number of Boost."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x08""ohFilter"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x08""ohFilter"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0B""Input,Flags"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x49""Filters the first vector using the second one as boolean inclusion flags."),
            // parameter descriptions
            TempStrNoSize("\x16""vector to be filtered."),
            TempStrNoSize("\x1C""vector to inclusion flags.  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0F""ohFunctionCount"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x0F""ohFunctionCount"),
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
            TempStrNoSize("\x2E""returns the number of functions in this addin."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x06""ohPack"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x06""ohPack"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""trim error/null/empty values from bottom/right of matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x14""ohRangeRetrieveError"),
            // parameter codes
            TempStrNoSize("\x02""RR"),
            // function display name
            TempStrNoSize("\x14""ohRangeRetrieveError"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x05""Range"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4A""Retrieve the error message if any that is associated with the given range."),
            // parameter descriptions
            TempStrNoSize("\x11""range to query.  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x16""ohRemoveInvalidColumns"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x16""ohRemoveInvalidColumns"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""trim error/null/empty columns from matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohRemoveInvalidRows"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x13""ohRemoveInvalidRows"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""trim error/null/empty rows from matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x13""ohRetrieveErrorImpl"),
            // parameter codes
            TempStrNoSize("\x03""CR#"),
            // function display name
            TempStrNoSize("\x13""ohRetrieveErrorImpl"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x05""Range"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""Concrete implementation of ohRangeRetrieveError().  This function is hidden."),
            // parameter descriptions
            TempStrNoSize("\x11""range to query.  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x07""ohStack"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x07""ohStack"),
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
            TempStrNoSize("\x85""Returns the amount of stack space left available to the XLL.  This function returns the number 65535 when the stack size exceeds 64K."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohStringConcatenate"),
            // parameter codes
            TempStrNoSize("\x04""CPC#"),
            // function display name
            TempStrNoSize("\x13""ohStringConcatenate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x14""Substrings,Delimiter"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x46""Concatenate substrings into a single string using the given delimiter."),
            // parameter descriptions
            TempStrNoSize("\x14""string to be parsed."),
            TempStrNoSize("\x13""delimiter string.  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x0D""ohStringSplit"),
            // parameter codes
            TempStrNoSize("\x05""PCCP#"),
            // function display name
            TempStrNoSize("\x0D""ohStringSplit"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x22""String,Delimiters,ConcatenateDelim"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x39""Split a string into substrings using the given delimiter."),
            // parameter descriptions
            TempStrNoSize("\x14""string to be parsed."),
            TempStrNoSize("\x15""delimiter characters."),
            TempStrNoSize("\x75""specifies if multiple adjacent delimiters are to be considered as one (TRUE) or not (FALSE). Default value = false.  "));

        Excel(xlfRegister, 0, 24, &xDll,
            // function code name
            TempStrNoSize("\x09""ohTrigger"),
            // parameter codes
            TempStrNoSize("\x10""NPPPPPPPPPPPPPP#"),
            // function display name
            TempStrNoSize("\x09""ohTrigger"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x65""Dummy0,Dummy1,Dummy2,Dummy3,Dummy4,Dummy5,Dummy6,Dummy7,Dummy8,Dummy9,Dummy10,Dummy11,Dummy12,Dummy13"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4B""forces a dependency between multiple ranges and returns the update counter."),
            // parameter descriptions
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x22""dummy range reference (ignored).  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0A""ohVbaError"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x0A""ohVbaError"),
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
            TempStrNoSize("\x30""Retrieve error message associated with VBA code."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x09""ohVersion"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x09""ohVersion"),
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
            TempStrNoSize("\x2C""returns the version number of ObjectHandler."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Ohutils with Excel

void unregisterOhutils(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0E""ohBoostVersion"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x0E""ohBoostVersion"),
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
            TempStrNoSize("\x24""returns the version number of Boost."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0E""ohBoostVersion"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x08""ohFilter"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x08""ohFilter"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x0B""Input,Flags"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x49""Filters the first vector using the second one as boolean inclusion flags."),
            // parameter descriptions
            TempStrNoSize("\x16""vector to be filtered."),
            TempStrNoSize("\x1C""vector to inclusion flags.  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x08""ohFilter"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0F""ohFunctionCount"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x0F""ohFunctionCount"),
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
            TempStrNoSize("\x2E""returns the number of functions in this addin."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0F""ohFunctionCount"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x06""ohPack"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x06""ohPack"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""trim error/null/empty values from bottom/right of matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x06""ohPack"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x14""ohRangeRetrieveError"),
            // parameter codes
            TempStrNoSize("\x02""RR"),
            // function display name
            TempStrNoSize("\x14""ohRangeRetrieveError"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x05""Range"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4A""Retrieve the error message if any that is associated with the given range."),
            // parameter descriptions
            TempStrNoSize("\x11""range to query.  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x14""ohRangeRetrieveError"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x16""ohRemoveInvalidColumns"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x16""ohRemoveInvalidColumns"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""trim error/null/empty columns from matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x16""ohRemoveInvalidColumns"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohRemoveInvalidRows"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x13""ohRemoveInvalidRows"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x12""InputRange,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x2E""trim error/null/empty rows from matrix/vector."),
            // parameter descriptions
            TempStrNoSize("\x2C""scalar/vector/matrix of values to be packed."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x13""ohRemoveInvalidRows"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x13""ohRetrieveErrorImpl"),
            // parameter codes
            TempStrNoSize("\x03""CR#"),
            // function display name
            TempStrNoSize("\x13""ohRetrieveErrorImpl"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x05""Range"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""Concrete implementation of ohRangeRetrieveError().  This function is hidden."),
            // parameter descriptions
            TempStrNoSize("\x11""range to query.  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x13""ohRetrieveErrorImpl"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x07""ohStack"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x07""ohStack"),
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
            TempStrNoSize("\x85""Returns the amount of stack space left available to the XLL.  This function returns the number 65535 when the stack size exceeds 64K."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x07""ohStack"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohStringConcatenate"),
            // parameter codes
            TempStrNoSize("\x04""CPC#"),
            // function display name
            TempStrNoSize("\x13""ohStringConcatenate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x14""Substrings,Delimiter"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x46""Concatenate substrings into a single string using the given delimiter."),
            // parameter descriptions
            TempStrNoSize("\x14""string to be parsed."),
            TempStrNoSize("\x13""delimiter string.  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x13""ohStringConcatenate"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x0D""ohStringSplit"),
            // parameter codes
            TempStrNoSize("\x05""PCCP#"),
            // function display name
            TempStrNoSize("\x0D""ohStringSplit"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x22""String,Delimiters,ConcatenateDelim"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x39""Split a string into substrings using the given delimiter."),
            // parameter descriptions
            TempStrNoSize("\x14""string to be parsed."),
            TempStrNoSize("\x15""delimiter characters."),
            TempStrNoSize("\x75""specifies if multiple adjacent delimiters are to be considered as one (TRUE) or not (FALSE). Default value = false.  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0D""ohStringSplit"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 24, &xDll,
            // function code name
            TempStrNoSize("\x09""ohTrigger"),
            // parameter codes
            TempStrNoSize("\x10""NPPPPPPPPPPPPPP#"),
            // function display name
            TempStrNoSize("\x09""ohTrigger"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x65""Dummy0,Dummy1,Dummy2,Dummy3,Dummy4,Dummy5,Dummy6,Dummy7,Dummy8,Dummy9,Dummy10,Dummy11,Dummy12,Dummy13"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4B""forces a dependency between multiple ranges and returns the update counter."),
            // parameter descriptions
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x20""dummy range reference (ignored)."),
            TempStrNoSize("\x22""dummy range reference (ignored).  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x09""ohTrigger"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0A""ohVbaError"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x0A""ohVbaError"),
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
            TempStrNoSize("\x30""Retrieve error message associated with VBA code."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""ohVbaError"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x09""ohVersion"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x09""ohVersion"),
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
            TempStrNoSize("\x2C""returns the version number of ObjectHandler."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x09""ohVersion"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

