/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2006, 2007, 2015 Ferdinando Ametrano
 Copyright (C) 2007 Chiara Fornarola
 Copyright (C) 2006, 2007 Marco Bianchetti
 Copyright (C) 2006, 2007 Cristina Duminuco
 Copyright (C) 2006, 2007 Giorgio Facchinetti
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
#include <qlo/abcd.hpp>

#include <ql/math/abcdmathfunction.hpp>
#include <ql/math/polynomialmathfunction.hpp>
#include <ql/termstructures/volatility/abcd.hpp>
#include <ql/quotes/simplequote.hpp>
#include <ql/termstructures/volatility/abcdcalibration.hpp>
#include <ql/termstructures/yield/tenorbasis.hpp>

using boost::shared_ptr;
using ObjectHandler::LibraryObject;

namespace QuantLibAddin {
   
    AbcdMathFunction::AbcdMathFunction(
            const shared_ptr<ObjectHandler::ValueObject>& properties,
            const std::vector<QuantLib::Real>& abcd,
            bool permanent)
    : LibraryObject<QuantLib::AbcdMathFunction>(properties, permanent) {
        libraryObject_ = shared_ptr<QuantLib::AbcdMathFunction>(new
            QuantLib::AbcdMathFunction(abcd));
    }   

    PolynomialFunction::PolynomialFunction(
            const shared_ptr<ObjectHandler::ValueObject>& properties,
            const std::vector<QuantLib::Real>& c,
            bool permanent)
    : LibraryObject<QuantLib::PolynomialFunction>(properties, permanent) {
        libraryObject_ = shared_ptr<QuantLib::PolynomialFunction>(new
            QuantLib::PolynomialFunction(c));
    }

    AbcdTenorBasis::AbcdTenorBasis(
        const shared_ptr<ObjectHandler::ValueObject>& p,
        QuantLib::Date settlementDate,
        shared_ptr<QuantLib::IborIndex> iborIndex,
        const QuantLib::Handle<QuantLib::YieldTermStructure>& baseCurve,
        bool isSimple,
        shared_ptr<QuantLib::AbcdMathFunction> f,
        bool permanent)
    : TenorBasis(p, permanent)
    {
        libraryObject_ = shared_ptr<QuantLib::AbcdTenorBasis>(new
            QuantLib::AbcdTenorBasis(settlementDate, iborIndex,
                                     baseCurve, isSimple, f));
    }

    PolynomialTenorBasis::PolynomialTenorBasis(
        const shared_ptr<ObjectHandler::ValueObject>& p,
        QuantLib::Date settlementDate,
        shared_ptr<QuantLib::IborIndex> iborIndex,
        const QuantLib::Handle<QuantLib::YieldTermStructure>& baseCurve,
        bool isSimple,
        shared_ptr<QuantLib::PolynomialFunction> f,
        bool permanent)
    : TenorBasis(p, permanent)
    {
        libraryObject_ = shared_ptr<QuantLib::PolynomialTenorBasis>(new
            QuantLib::PolynomialTenorBasis(settlementDate, iborIndex,
                                           baseCurve, isSimple, f));
    }

    AbcdFunction::AbcdFunction(
            const shared_ptr<ObjectHandler::ValueObject>& properties,
            QuantLib::Real a, 
            QuantLib::Real b,
            QuantLib::Real c, 
            QuantLib::Real d,
            bool permanent)
    : LibraryObject<QuantLib::AbcdFunction>(properties, permanent) {
        libraryObject_ = shared_ptr<QuantLib::AbcdFunction>(new
            QuantLib::AbcdFunction(a, b, c, d));
    }   

    AbcdCalibration::AbcdCalibration(
               const shared_ptr<ObjectHandler::ValueObject>& properties,
               const std::vector<QuantLib::Time>& times,
               const std::vector<QuantLib::Volatility>& blackVols,
               QuantLib::Real a, QuantLib::Real b,
               QuantLib::Real c, QuantLib::Real d,
               bool aIsFixed, bool bIsFixed,
               bool cIsFixed, bool dIsFixed,
               bool vegaWeighted,
               const shared_ptr<QuantLib::EndCriteria> endCriteria,
               const shared_ptr<QuantLib::OptimizationMethod> method,
               bool permanent)
    : LibraryObject<QuantLib::AbcdCalibration>(properties, permanent) {

        libraryObject_ = shared_ptr<QuantLib::AbcdCalibration>(new
            QuantLib::AbcdCalibration(times, blackVols, a, b, c, d,
                                      aIsFixed, bIsFixed, cIsFixed, dIsFixed,
                                      vegaWeighted, endCriteria, method));
    }

}
