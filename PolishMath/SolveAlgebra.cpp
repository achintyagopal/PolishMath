//
//  SolveAlgebra.cpp
//  
//
//  Created by Achintya Gopal on 9/16/15.
//
//

#include "SolveAlgebra.h"
#include "PolishMath.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <cstddef>    

using std::vector;
using std::istringstream;
using std::size_t;

AlgebraProblem::AlgebraProblem(string leftSide = "", string rightSide = "") {
    this.leftSide = leftSide;
    this.rightSide = rightSide;
}

string AlgebraProblem::solve(char x) {
    std::string problem = "(";
    problem = problem.append(leftSide);
    problem = problem.append(")-(");
    problem = problem.append(rightSide);
    problem = problem.append(")");
    PolishMath polish(problem);
    problem = polish.solve();
    
    size_t found = problem.find_first_of('/');
    string topStr = problem.substr(0, found + 1);
    string botStr = problem.substr(found + 1, strlen(problem));
    
    int numberVar = numberOfVariables(problem);
    
    if(botStr[0] == 0){
        //undefined
        return null;
    }
    
    if(problem.find_first_of(x) != string::npos){
        return null;
    }
    
    if(numberVar == 0){
        //all variables cancelled
        if(topStr[0] == '0')
        {
            //solution all real number, x = R
        } else{
            //solution no solutions, x = /
        }
    } else if(numberVar == 1){
        //solve
        //use gsl, but don't want gpl
    } else{
        //count greatest polynomial
        //if two, use quadratic equation
        //if one, easy to solve
        
    }
    
    return problem;
}

int numberOfVariables(string problem) {
    
    int numberVar = 0;
    for(int i = 0; i < 26; i++){
        char letter = i + 'a';
        if(problem.find_first_of(letter) != string::npos){
            numberVar++;
        }
        
        letter = i + 'A';
        if(problem.find_first_of(letter) != string::npos){
            numberVar++;
        }
    }

    return numberVar;
}