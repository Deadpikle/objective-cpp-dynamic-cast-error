//
//  main.m
//  TestCast
//
//  Created by School of Computing Macbook on 6/18/18.
//  Copyright © 2018 Pikle Productions. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <TestCastCPP/TestClass.hpp>

// the sample dynamic_cast at https://stackoverflow.com/a/11510428/3938401 works as expected
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Parent *parentPtr = Child::createRawPtr();
        Child *child = dynamic_cast<Child*>(parentPtr);
        NSLog(@"Was the cast successful? %s", child != nullptr ? "True" : "False");
    }
    return 0;
}


