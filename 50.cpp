//
// Created by Max on 2019-11-12.
//


#include <cmath>


double help(double x, int n) {

   if(n==1){
       return x;

   }

   if(n%2==0){
       return help(x,n/2)*help(x,n/2);

   }else{
       return x*help(x,n/2)*help(x,n/2);
   }



}

double myPow(double x, int n){
    if(n==0){
        return 1;
    }

    if(n==1){
        return x;

    }
    if(n==-1){
        return 1/x;

    }


    double half=myPow(x,n/2);
    double rest=myPow(x,n%2);

    return half*half*rest;

}