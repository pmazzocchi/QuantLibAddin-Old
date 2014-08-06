
/*  
 Copyright (C) 2006 Eric Ehlers
 
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

#include <boost/bind.hpp>

namespace ObjectHandler {

    // ohObjectPropertyValues

    typedef     boost::_bi::bind_t<
                ObjectHandler::property_t,
                boost::_mfi::cmf1<
                    ObjectHandler::property_t,
                    ObjectHandler::Object,
                    const std::string&>,
                boost::_bi::list2<
                    boost::_bi::value<boost::shared_ptr<ObjectHandler::Object> >,
                    boost::arg<1> > >
                ohObjectPropertyValuesBind;

    typedef     ObjectHandler::property_t 
                (ObjectHandler::Object::* ohObjectPropertyValuesSignature)(
                    const std::string&) const;

}

