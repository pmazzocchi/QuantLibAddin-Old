
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

// register functions in category Logging with Excel

void registerLogging(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x09""ohLogFile"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x09""ohLogFile"),
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
            TempStrNoSize("\x0D""get log file."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0A""ohLogLevel"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x0A""ohLogLevel"),
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
            TempStrNoSize("\x0E""get log level."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohLogSetFile"),
            // parameter codes
            TempStrNoSize("\x05""CCPP#"),
            // function display name
            TempStrNoSize("\x0C""ohLogSetFile"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1C""LogFileName,LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1C""begin logging to named file."),
            // parameter descriptions
            TempStrNoSize("\x1A""path and name of log file."),
            TempStrNoSize("\x2E""threshold for log messages. Default value = 4."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0D""ohLogSetLevel"),
            // parameter codes
            TempStrNoSize("\x04""LNP#"),
            // function display name
            TempStrNoSize("\x0D""ohLogSetLevel"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1F""set threshold for log messages."),
            // parameter descriptions
            TempStrNoSize("\x1B""threshold for log messages."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x11""ohLogWriteMessage"),
            // parameter codes
            TempStrNoSize("\x05""LCPP#"),
            // function display name
            TempStrNoSize("\x11""ohLogWriteMessage"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1B""LogMessage,LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x0E""log a message."),
            // parameter descriptions
            TempStrNoSize("\x15""message to be logged."),
            TempStrNoSize("\x2E""threshold for log messages. Default value = 4."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Logging with Excel

void unregisterLogging(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x09""ohLogFile"),
            // parameter codes
            TempStrNoSize("\x03""CP#"),
            // function display name
            TempStrNoSize("\x09""ohLogFile"),
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
            TempStrNoSize("\x0D""get log file."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x09""ohLogFile"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 11, &xDll,
            // function code name
            TempStrNoSize("\x0A""ohLogLevel"),
            // parameter codes
            TempStrNoSize("\x03""NP#"),
            // function display name
            TempStrNoSize("\x0A""ohLogLevel"),
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
            TempStrNoSize("\x0E""get log level."),
            // parameter descriptions
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""ohLogLevel"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x0C""ohLogSetFile"),
            // parameter codes
            TempStrNoSize("\x05""CCPP#"),
            // function display name
            TempStrNoSize("\x0C""ohLogSetFile"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1C""LogFileName,LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1C""begin logging to named file."),
            // parameter descriptions
            TempStrNoSize("\x1A""path and name of log file."),
            TempStrNoSize("\x2E""threshold for log messages. Default value = 4."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0C""ohLogSetFile"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0D""ohLogSetLevel"),
            // parameter codes
            TempStrNoSize("\x04""LNP#"),
            // function display name
            TempStrNoSize("\x0D""ohLogSetLevel"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x1F""set threshold for log messages."),
            // parameter descriptions
            TempStrNoSize("\x1B""threshold for log messages."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0D""ohLogSetLevel"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x11""ohLogWriteMessage"),
            // parameter codes
            TempStrNoSize("\x05""LCPP#"),
            // function display name
            TempStrNoSize("\x11""ohLogWriteMessage"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1B""LogMessage,LogLevel,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x0D""ObjectHandler"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x0E""log a message."),
            // parameter descriptions
            TempStrNoSize("\x15""message to be logged."),
            TempStrNoSize("\x2E""threshold for log messages. Default value = 4."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x11""ohLogWriteMessage"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

