//
//  SolveAlgebra.h
//  
//
//  Created by Achintya Gopal on 9/16/15.
//
//

#ifndef ____SolveAlgebra__
#define ____SolveAlgebra__

#include <stdio.h>
#include <string.h>

using std::string;

class AlgebraProblem {
private:
    string leftSide;
    string rightSide;
    
public:
    AlgebraProblem(string leftSide = "", string rightSide = "");
    //solve problem for variable x
    string solve(char x);
};

int numberOfVariables(string problem);

#endif /* defined(____SolveAlgebra__) */
