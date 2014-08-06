
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

// register functions in category Objects with Excel

void registerObjects(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x15""ohObjectCallerAddress"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x15""ohObjectCallerAddress"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""retrieve address of cell in which object resides."),
            // parameter descriptions
            TempStrNoSize("\x1B""ID of object to be queried."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohObjectCallerKey"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x11""ohObjectCallerKey"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x5F""retrieve unique ID of the CallingRange object associated with the cell in which object resides."),
            // parameter descriptions
            TempStrNoSize("\x1B""ID of object to be queried."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohObjectClassName"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x11""ohObjectClassName"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x19""get the object class name"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x14""ohObjectCreationTime"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x14""ohObjectCreationTime"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x56""The time at which the Object was initially created, return the time of initing object."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""ohObjectExists"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x0E""ohObjectExists"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x35""list the IDs of objects in repository matching regex."),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohObjectIsOrphan"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x10""ohObjectIsOrphan"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1F""get the object property orphan "),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohObjectIsPermanent"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x13""ohObjectIsPermanent"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x21""get the object property permanent"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x14""ohObjectPrecedentIDs"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x14""ohObjectPrecedentIDs"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x43""A list of the Object's precedent Objects, return the object's list."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x15""ohObjectUpdateCounter"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x15""ohObjectUpdateCounter"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x26""get the object property update counter"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectUpdateTime"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectUpdateTime"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""The time at which the Object was last recreated, return the last udate time."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Objects with Excel

void unregisterObjects(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x15""ohObjectCallerAddress"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x15""ohObjectCallerAddress"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""retrieve address of cell in which object resides."),
            // parameter descriptions
            TempStrNoSize("\x1B""ID of object to be queried."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x15""ohObjectCallerAddress"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohObjectCallerKey"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x11""ohObjectCallerKey"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x5F""retrieve unique ID of the CallingRange object associated with the cell in which object resides."),
            // parameter descriptions
            TempStrNoSize("\x1B""ID of object to be queried."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x11""ohObjectCallerKey"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x11""ohObjectClassName"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x11""ohObjectClassName"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x19""get the object class name"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x11""ohObjectClassName"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x14""ohObjectCreationTime"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x14""ohObjectCreationTime"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x56""The time at which the Object was initially created, return the time of initing object."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x14""ohObjectCreationTime"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""ohObjectExists"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x0E""ohObjectExists"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x35""list the IDs of objects in repository matching regex."),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0E""ohObjectExists"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x10""ohObjectIsOrphan"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x10""ohObjectIsOrphan"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1F""get the object property orphan "),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x10""ohObjectIsOrphan"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x13""ohObjectIsPermanent"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x13""ohObjectIsPermanent"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x21""get the object property permanent"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x13""ohObjectIsPermanent"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x14""ohObjectPrecedentIDs"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x14""ohObjectPrecedentIDs"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x43""A list of the Object's precedent Objects, return the object's list."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x14""ohObjectPrecedentIDs"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x15""ohObjectUpdateCounter"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x15""ohObjectUpdateCounter"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x26""get the object property update counter"),
            // parameter descriptions
            TempStrNoSize("\x0F""Object ID name."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x15""ohObjectUpdateCounter"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x12""ohObjectUpdateTime"),
            // parameter codes
            TempStrNoSize("\x04""PPP#"),
            // function display name
            TempStrNoSize("\x12""ohObjectUpdateTime"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectID,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x4C""The time at which the Object was last recreated, return the last udate time."),
            // parameter descriptions
            TempStrNoSize("\x0A""object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x12""ohObjectUpdateTime"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

