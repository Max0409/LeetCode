//
// Created by Max on 2019-11-14.
//
#include <string>
#include <stdlib.h>
#include <unordered_map>
using namespace std;

string fractionToDecimal(int numerator, int denominator) {


    long num=(long)numerator;
    long den=(long)denominator;
    string res;
    if(num<0||den<0){
        res+='-';

    }


    den=abs(denominator);

   // num=abs(num);
//    den=abs(den);

    res+=to_string(num/den);
    num=num%den;

    if(num==0){
        return res;
    }
    res+='.';
    int loop_ind=-1;

    unordered_map<long ,long> m;

    while(num!=0){
        if(m.count(num)){
            loop_ind=m[num];

            break;
        } else{
            m[num]=res.size();

        }

        num*=10;
        res+=to_string(num/den);
        num%=den;


    }


    if (num == 0) {
        return res;
    }
    return res.substr(0, loop_ind) + "(" + res.substr(loop_ind) + ")";




}