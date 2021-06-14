
"""
 Copyright (C) 2005, 2006, 2007, 2008 Eric Ehlers

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
"""

"""Global log class - presently outputs all messages to stdout."""

from gensrc.patterns import singleton
#import time

class Log(singleton.Singleton):
    """Global log class - presently outputs all messages to stdout."""

    def logMessage(self, message = ''):
        """Print a message to stdout."""
        #print time.strftime('%d-%b-%Y %H:%M:%S ') + message
        print(message)

