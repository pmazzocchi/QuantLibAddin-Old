
"""
 Copyright (C) 2007, 2008 Eric Ehlers

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

"""The list of Category objects in use for this running instance of gensrc."""

from gensrc.utilities import utilities
from gensrc.categories import category
from gensrc.categories import exceptions
from gensrc.functions import supportedplatform
from gensrc.configuration import environment

class CategoryList(object):
    """The list of Category objects in use for this running instance of gensrc."""

    #############################################
    # public interface
    #############################################

    def categories(self, platformName, coreCategories, addinCategories, implementation = supportedplatform.AUTO):
        """Serve up function category objects alphabetically by name."""
        if coreCategories:
            for categoryName in self.coreCategoryNames_:
                cat = self.categoryDict_[categoryName]
                if platformName == '*' or cat.platformSupported(platformName, implementation):
                    yield cat
        if addinCategories:
            for categoryName in self.addinCategoryNames_:
                cat = self.categoryDict_[categoryName]
                if platformName == '*' or cat.platformSupported(platformName, implementation):
                    yield cat

    def init(self, enumerationList):
        for cat in list(self.categoryDict_.values()):
            cat.init(enumerationList)

    #############################################
    # private member functions
    #############################################

    def loadCategories(self, catList, configPath):
        if not configPath: return
        for categoryName in catList:
            cat = utilities.serializeObject(category.Category, configPath + 'metadata/functions/' + categoryName)
            if cat.name() in self.categoryDict_:
                raise exceptions.DuplicateNameException(cat.name())
            self.categoryDict_[cat.name()] = cat
    
    def __init__(self):
        """Initialize the CategoryList object."""

        utilities.serializeList(environment.Environment.instance().coreConfigPath() +
            'config/categories', self, 'coreCategoryNames', 'categoryName')
        utilities.serializeList(environment.Environment.instance().addinConfigPath() +
            'config/categories', self, 'addinCategoryNames', 'categoryName')

        self.coreCategoryNames_.sort()
        self.addinCategoryNames_.sort()

        self.categoryDict_ = {}
        self.loadCategories(self.coreCategoryNames_,
            environment.Environment.instance().coreConfigPath())
        self.loadCategories(self.addinCategoryNames_,
            environment.Environment.instance().addinConfigPath())

