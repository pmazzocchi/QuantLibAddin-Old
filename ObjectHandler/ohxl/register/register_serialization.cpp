
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

// register functions in category Serialization with Excel

void registerSerialization(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 15, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohObjectLoad"),
            // parameter codes
            TempStrNoSize("\x07""PCPPPP#"),
            // function display name
            TempStrNoSize("\x0C""ohObjectLoad"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x2B""Directory,Pattern,Recurse,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x50""Deserialize list of objects from given file, return IDs of deserialized objects."),
            // parameter descriptions
            TempStrNoSize("\x34""Directory from which objects are to be deserialized."),
            TempStrNoSize("\x83""Name of XML file from which objects are to be deserialized, or a pattern in UNIX format (wildcard is .*). Default value = .*\\.xml."),
            TempStrNoSize("\x69""Recurse subdirectories of Directory when searching for filenames matching Pattern. Default value = false."),
            TempStrNoSize("\x5E""Overwrite any existing Object that has the same ID as one being loaded. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectLoadString"),
            // parameter codes
            TempStrNoSize("\x05""PCPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectLoadString"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x15""Xml,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x52""Deserialize list of objects from given string, return IDs of deserialized objects."),
            // parameter descriptions
            TempStrNoSize("\x35""XML string from which objects are to be deserialized."),
            TempStrNoSize("\x5E""Overwrite any existing Object that has the same ID as one being loaded. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 15, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohObjectSave"),
            // parameter codes
            TempStrNoSize("\x07""NPCPPP#"),
            // function display name
            TempStrNoSize("\x0C""ohObjectSave"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x33""ObjectList,Filename,Overwrite,IncludeGroups,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""Serialize list of objects to given path, return count of objects serialized."),
            // parameter descriptions
            TempStrNoSize("\x28""list of IDs of objects to be serialized."),
            TempStrNoSize("\x30""file name to which objects are to be serialized."),
            TempStrNoSize("\x3E""overwrite the output file if it exists. Default value = false."),
            TempStrNoSize("\x3A""include Groups in the serialisation. Default value = true."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectSaveString"),
            // parameter codes
            TempStrNoSize("\x05""CPPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectSaveString"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1C""ObjectList,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3E""Serialize list of objects to given path, return resulting XML."),
            // parameter descriptions
            TempStrNoSize("\x28""list of IDs of objects to be serialized."),
            TempStrNoSize("\x3E""overwrite the output file if it exists. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Serialization with Excel

void unregisterSerialization(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 15, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohObjectLoad"),
            // parameter codes
            TempStrNoSize("\x07""PCPPPP#"),
            // function display name
            TempStrNoSize("\x0C""ohObjectLoad"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x2B""Directory,Pattern,Recurse,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x50""Deserialize list of objects from given file, return IDs of deserialized objects."),
            // parameter descriptions
            TempStrNoSize("\x34""Directory from which objects are to be deserialized."),
            TempStrNoSize("\x83""Name of XML file from which objects are to be deserialized, or a pattern in UNIX format (wildcard is .*). Default value = .*\\.xml."),
            TempStrNoSize("\x69""Recurse subdirectories of Directory when searching for filenames matching Pattern. Default value = false."),
            TempStrNoSize("\x5E""Overwrite any existing Object that has the same ID as one being loaded. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0C""ohObjectLoad"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectLoadString"),
            // parameter codes
            TempStrNoSize("\x05""PCPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectLoadString"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x15""Xml,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x52""Deserialize list of objects from given string, return IDs of deserialized objects."),
            // parameter descriptions
            TempStrNoSize("\x35""XML string from which objects are to be deserialized."),
            TempStrNoSize("\x5E""Overwrite any existing Object that has the same ID as one being loaded. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x12""ohObjectLoadString"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 15, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohObjectSave"),
            // parameter codes
            TempStrNoSize("\x07""NPCPPP#"),
            // function display name
            TempStrNoSize("\x0C""ohObjectSave"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x33""ObjectList,Filename,Overwrite,IncludeGroups,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""Serialize list of objects to given path, return count of objects serialized."),
            // parameter descriptions
            TempStrNoSize("\x28""list of IDs of objects to be serialized."),
            TempStrNoSize("\x30""file name to which objects are to be serialized."),
            TempStrNoSize("\x3E""overwrite the output file if it exists. Default value = false."),
            TempStrNoSize("\x3A""include Groups in the serialisation. Default value = true."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0C""ohObjectSave"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectSaveString"),
            // parameter codes
            TempStrNoSize("\x05""CPPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectSaveString"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1C""ObjectList,Overwrite,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3E""Serialize list of objects to given path, return resulting XML."),
            // parameter descriptions
            TempStrNoSize("\x28""list of IDs of objects to be serialized."),
            TempStrNoSize("\x3E""overwrite the output file if it exists. Default value = false."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x12""ohObjectSaveString"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

