//
// Created by Max on 2020-01-07.
//


int rangeBitwiseAnd(int m, int n) {


    int count=0;

    while (m!=n){
        count++;
        m>>=1;
        n>>=1;


    }

    n=n>>count;
    return n;



}