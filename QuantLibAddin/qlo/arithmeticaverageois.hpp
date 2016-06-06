/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2016 Stefano Fondi

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

#ifndef qla_arithmeticaverageois_hpp
#define qla_arithmeticaverageois_hpp

#include <qlo/swap.hpp>
#include <ql/instruments/arithmeticaverageois.hpp>

namespace QuantLib {
    class ArithmeticOISRateHelper;
}

namespace QuantLibAddin {

    class ArithmeticAverageOIS : public Swap {
    public:
        ArithmeticAverageOIS(
            const boost::shared_ptr<ObjectHandler::ValueObject>& properties,
            QuantLib::ArithmeticAverageOIS::Type type,
            std::vector<QuantLib::Real> nominals,
            const boost::shared_ptr<QuantLib::Schedule>& fixedLegSchedule,
            QuantLib::Rate fixedRate,
            const QuantLib::DayCounter& fixedDC,
            const boost::shared_ptr<QuantLib::OvernightIndex>& overnightIndex,
            const boost::shared_ptr<QuantLib::Schedule>& overnightLegSchedule,
            QuantLib::Spread overnightSpread,
            QuantLib::Real meanReversionSpeed,
            QuantLib::Real volatility,
            bool byApprox,
            bool permanent);
        ArithmeticAverageOIS( // MakeArithmeticAverageOIS
            const boost::shared_ptr<ObjectHandler::ValueObject>& properties,
            QuantLib::Natural settlDays,
            const QuantLib::Period& swapTenor,
            const boost::shared_ptr<QuantLib::OvernightIndex>& overnightIndex,
            QuantLib::Rate fixedRate,
            const QuantLib::Period& forwardStart,
            const QuantLib::DayCounter& fixLegDayCounter,
            const QuantLib::Frequency fixedLegPaymentFrequency,
            const QuantLib::Frequency overnightLegPaymentFrequency,
            QuantLib::Spread overnightSpread,
            QuantLib::Real meanReversionSpeed,
            QuantLib::Real volatility,
            bool byApprox,
            bool permanent);
        ArithmeticAverageOIS( // ArithemticOISRateHelper->swap()
            const boost::shared_ptr<ObjectHandler::ValueObject>& properties,
            const boost::shared_ptr<QuantLib::ArithmeticOISRateHelper>& swapRH,
            bool permanent);
        std::vector<std::vector<ObjectHandler::property_t> > fixedLegAnalysis(
            const QuantLib::Date& d);
        std::vector<std::vector<ObjectHandler::property_t> > overnightLegAnalysis(
            const QuantLib::Date& d);
    };

}

#endif
