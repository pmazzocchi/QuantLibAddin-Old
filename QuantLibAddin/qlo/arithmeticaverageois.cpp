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

#if defined(HAVE_CONFIG_H)
    #include <qlo/config.hpp>
#endif

#include <qlo/arithmeticaverageois.hpp>
#include <ql/instruments/makearithmeticaverageois.hpp>
#include <ql/termstructures/yield/arithmeticoisratehelper.hpp>
#include <ql/time/ecb.hpp>

using std::vector;
using ObjectHandler::property_t;
using QuantLib::Period;
using QuantLib::MakeArithmeticAverageOIS;
using boost::shared_ptr;

namespace QuantLibAddin {

    ArithmeticAverageOIS::ArithmeticAverageOIS(
            const shared_ptr<ObjectHandler::ValueObject>& properties,
            QuantLib::ArithmeticAverageOIS::Type type,
            std::vector<QuantLib::Real> nominals,
            const shared_ptr<QuantLib::Schedule>& fixedLegSchedule,
            QuantLib::Rate fixedRate,
            const QuantLib::DayCounter& fixedDC,
            const shared_ptr<QuantLib::OvernightIndex>& overnightIndex,
            const shared_ptr<QuantLib::Schedule>& overnightLegSchedule,
            QuantLib::Spread overnightSpread,
            QuantLib::Real meanReversionSpeed,
            QuantLib::Real volatility,
            bool byApprox,
            bool permanent)
    : Swap(properties, permanent)
    {
        libraryObject_ = shared_ptr<QuantLib::Instrument>(new
            QuantLib::ArithmeticAverageOIS(type, nominals,
                                           *fixedLegSchedule,
                                           fixedRate, fixedDC,
                                           overnightIndex,
                                           *overnightLegSchedule,
                                           overnightSpread,
                                           meanReversionSpeed,
                                           volatility, byApprox));
    }


    // MakeArithmeticAverageOIS
    ArithmeticAverageOIS::ArithmeticAverageOIS(
        const shared_ptr<ObjectHandler::ValueObject>& properties,
        QuantLib::Natural settlDays,
        const QuantLib::Period& swapTenor,
        const shared_ptr<QuantLib::OvernightIndex>& overnightIndex,
        QuantLib::Rate fixRate,
        const QuantLib::Period& fwdStart,
        const QuantLib::DayCounter& fixDayCounter,
        const QuantLib::Frequency fixedLegPaymentFrequency,
        const QuantLib::Frequency overnightLegPaymentFrequency,
        QuantLib::Spread overnightSpread,
        QuantLib::Real meanReversionSpeed,
        QuantLib::Real volatility,
        bool byApprox,
        bool permanent)
        : Swap(properties, permanent)
    {
        libraryObject_ = MakeArithmeticAverageOIS(swapTenor, overnightIndex, fixRate, fwdStart)
            .withSettlementDays(settlDays)
            .withFixedLegDayCount(fixDayCounter)
            .withFixedLegPaymentFrequency(fixedLegPaymentFrequency)
            .withOvernightLegPaymentFrequency(overnightLegPaymentFrequency)
            .withOvernightLegSpread(overnightSpread)
            .withArithmeticAverage(meanReversionSpeed, volatility, byApprox)
            .operator shared_ptr<QuantLib::ArithmeticAverageOIS>();
    }

    ArithmeticAverageOIS::ArithmeticAverageOIS(
        const shared_ptr<ObjectHandler::ValueObject>& properties,
        const shared_ptr<QuantLib::ArithmeticOISRateHelper>& swapRH,
        bool permanent)
    : Swap(properties, permanent)
    {
        libraryObject_ = swapRH->swap();
    }

    vector<vector<property_t> > ArithmeticAverageOIS::fixedLegAnalysis(
                                                    const QuantLib::Date& d) {
        return Swap::legAnalysis(0, d);
    }

    vector<vector<property_t> > ArithmeticAverageOIS::overnightLegAnalysis(
                                                    const QuantLib::Date& d) {
        return Swap::legAnalysis(1, d);
    }

}
