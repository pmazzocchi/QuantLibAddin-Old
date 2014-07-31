/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2014 Eric Ehlers

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

/*! \file
    \brief Some functions for C++ addins that link ObjectHandler.
*/

#ifndef oh_addins_hpp
#define oh_addins_hpp

#include <string>

namespace ObjectHandler {

    //! \name Addins
    //@{
    //! Return the ObjectHandler version number as a string.
    std::string ohVersion();
    //! Delete an object.
    void ohDeleteObject(const std::string &objectID);
    //! Serialize an object to a string.
    std::string ohObjectSaveString(const std::string &objectId);
    //! Deserialize an object from a string.
    void ohLoadObjectString(const std::string &xml, bool overwriteExisting);
    //@}
}

#endif
