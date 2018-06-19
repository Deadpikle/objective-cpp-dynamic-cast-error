# objective-cpp-dynamic-cast-error
A small project to demonstrate unexpected behavior in Objective-C++

To demonstrate the issue, build the "TestCast" scheme under debug. Note that the output for the 
`dynamic_cast` is "True" -- the desired behavior. Then, build that same scheme under release. 
The output is now "False", which is not the expected behavior.

[There is an SO post about this repo here](https://stackoverflow.com/q/50929670/3938401).
