//
//  PolishMath.h
//  MathCam
//
//  Created by Achintya Gopal on 4/21/15.
//  Copyright (c) 2015 Achintya Gopal. All rights reserved.
//

#ifndef __MathCam__PolishMath__
#define __MathCam__PolishMath__

#include <stdio.h>
#include <string>

using std::string;

class MathProblem{
    string problem;
    
    MathProblem(string = "");
    string solve();
    
};

string operator+(string, string);
string operator-(string, string);
string operator*(string, string);
string operator/(string, string);
string operator^(string, string);
string simplify(std::__1::string);
bool is_digits(const std::string &str);
bool isEqual(string,string);
bool isInteger(const std::string &str);

#endif /* defined(__MathCam__PolishMath__) */
