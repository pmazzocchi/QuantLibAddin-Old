
/*
 Copyright (C) 2006 Cristina Duminuco

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it under the
 terms of the QuantLib license.  You should have received a copy of the
 license along with this program; if not, please email quantlib-dev@lists.sf.net
 The license is also available online at http://quantlib.org/html/license.html

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#if defined(HAVE_CONFIG_H)
    #include <qlo/config.hpp>
#endif
#include <qlo/sequencestatistics.hpp>

namespace QuantLibAddin {

    SequenceStatistics::SequenceStatistics(QuantLib::Size dimension,
                                           QuantLib::Matrix values, 
                                           std::vector<QuantLib::Real> weights)
        {               
            libraryObject_ = boost::shared_ptr<QuantLib::SequenceStatistics>(
                new QuantLib::SequenceStatistics(dimension));

            QL_REQUIRE(weights.empty() || values.rows()==weights.size(),
                "Values and weights vectors must have the same number of elements.");
            
            if (values.rows()>0) {
                if (!weights.empty()) {
                    for (QuantLib::Size i=0; i<values.rows(); ++i) {
                        libraryObject_->add(values.row_begin(i),
                                            values.row_end(i),
                                            weights[i]);
                    }
                } else {
                    for (QuantLib::Size i=0; i<values.rows(); ++i) {
                        libraryObject_->add(values.row_begin(i),
                                            values.row_end(i));
                    }
                }
            }
        }

}
