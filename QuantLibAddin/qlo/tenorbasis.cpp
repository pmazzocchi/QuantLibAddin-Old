/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2015 Ferdinando Ametrano
 Copyright (C) 2015 Paolo Mazzocchi

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
    #include <qlo/config.hpp>
#endif
#include <qlo/tenorbasis.hpp>

#include <ql/math/abcdmathfunction.hpp>
#include <ql/math/polynomialmathfunction.hpp>
#include <ql/quotes/simplequote.hpp>
#include <ql/termstructures/yield/tenorbasis.hpp>

using boost::shared_ptr;
using ObjectHandler::LibraryObject;

namespace QuantLibAddin {
   
    TenorBasis::TenorBasis(
                       const shared_ptr<ObjectHandler::ValueObject>& p,
                       bool permanent)
    : CalibratedModel(p, permanent){}

    AbcdTenorBasis::AbcdTenorBasis(
        const shared_ptr<ObjectHandler::ValueObject>& p,
        shared_ptr<QuantLib::IborIndex> iborIndex,
        const QuantLib::Handle<QuantLib::YieldTermStructure>& baseCurve,
        QuantLib::Date referenceDate,
        bool isSimple,
        shared_ptr<QuantLib::AbcdMathFunction> f,
        bool permanent)
    : TenorBasis(p, permanent) {
        libraryObject_ = shared_ptr<QuantLib::AbcdTenorBasis>(new
            QuantLib::AbcdTenorBasis(iborIndex, baseCurve, referenceDate, 
                                     isSimple, f));
    }

    PolynomialTenorBasis::PolynomialTenorBasis(
        const shared_ptr<ObjectHandler::ValueObject>& p,
        shared_ptr<QuantLib::IborIndex> iborIndex,
        const QuantLib::Handle<QuantLib::YieldTermStructure>& baseCurve,
        QuantLib::Date referenceDate,
        bool isSimple,
        const std::vector<QuantLib::Real>& coeff,
        bool permanent)
    : TenorBasis(p, permanent) {
        libraryObject_ = shared_ptr<QuantLib::PolynomialTenorBasis>(new
            QuantLib::PolynomialTenorBasis(iborIndex, baseCurve, referenceDate,
                                           isSimple, coeff));
    }

}
