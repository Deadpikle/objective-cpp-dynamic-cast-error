//
//  TestClass.cpp
//  TestCastCPP
//
//  Created by School of Computing Macbook on 6/18/18.
//  Copyright © 2018 Pikle Productions. All rights reserved.
//

#include "TestClass.hpp"

Parent::~Parent() {}

Child* Child::createRawPtr() {
    return new Child;
}
