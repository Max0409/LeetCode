//
// Created by Max on 2019-11-06.
//


using namespace std;

#include "string"
#include "iostream"
#include "vector"

int countPrimes(int n) {
    vector<bool>flag(n+1,true);
    for(int i=2;i<n+1;i++){
        if(flag[i]){
            for(int j=2*i;j<n+1;j+=i){
                flag[j]= false;

            }
        }
    }

    int count=0;
    for(int i=2;i<n+1;i++){
        if(flag[i]){
            count++;

        }
    }

    return count;

}

