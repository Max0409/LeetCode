//
// Created by Max on 2019-11-07.
//


#include "string"
#include "iostream"
#include "vector"//
#include "math.h"
#include <cmath>
using namespace std;

   int trailingZeroes(int n) {
       int count=0;


       while(n){
           count+=n/5;
           n=n/5;

       }

       return count;
    }

