//
//  main.cpp
//  TestCastCPPCMD
//
//  Created by School of Computing Macbook on 6/18/18.
//  Copyright © 2018 Pikle Productions. All rights reserved.
//

#include <iostream>
#include "TestClass.hpp"

#include <string>

void test() {
    // This all works just fine.
    Parent *parentPtr = Child::createRawPtr();
    Child *child = dynamic_cast<Child*>(parentPtr);
    std::cout << "Was the function cast successful? " << std::to_string(child != nullptr) << std::endl;
}

int main(int argc, const char * argv[]) {
    test();    
    return 0;
}
