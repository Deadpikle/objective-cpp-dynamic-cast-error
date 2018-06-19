//
//  TestClass.hpp
//  TestCastCPP
//
//  Created by School of Computing Macbook on 6/18/18.
//  Copyright © 2018 Pikle Productions. All rights reserved.
//

#ifndef TestClass_hpp
#define TestClass_hpp

// On macOS, only breaks in release mode.

class Parent {
public:
    // https://stackoverflow.com/a/8470002/3938401 - must have at least 1 virtual function for RTTI
    virtual ~Parent();
    
    Parent() {}
};

class Child : public Parent {
public:
    static Child* createRawPtr(); // if you inline this, everything works.
};

#endif /* TestClass_hpp */
