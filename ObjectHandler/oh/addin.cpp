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

#if defined(HAVE_CONFIG_H)     // Dynamically created by configure
#include <oh/config.hpp>
#endif
#include <oh/addin.hpp>
#include <oh/utilities.hpp>
#include <oh/repository.hpp>
#include <oh/serializationfactory.hpp>

std::string ObjectHandler::ohVersion() {
    return ObjectHandler::version();
}

void ObjectHandler::ohDeleteObject(const std::string &objectID) {
    ObjectHandler::Repository::instance().deleteObject(objectID);
}

std::string ObjectHandler::ohObjectSaveString(const std::string &objectId) {
    OH_GET_OBJECT(x, objectId, ObjectHandler::Object)
    return ObjectHandler::SerializationFactory::instance().saveObjectString(x);
}

void ObjectHandler::ohLoadObjectString(const std::string &xml, bool overwriteExisting) {
    ObjectHandler::SerializationFactory::instance().loadObjectString(xml, overwriteExisting);
}

