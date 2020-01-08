//
// Created by Max on 2019-12-25.
//

#include "string"
#include "iostream"
using namespace std;

int lengthOfLastWord(string s) {
    int i;
    for( i=s.size()-1 ; i>=0; i--) {
        if(s[i]!=' '){
            break;


        }


    }


    int count=0;
    for( i ; i>=0; i--){

        if(s[i]==' '){
            break;

        }
        if(s[i]){
            count++;

        }


    }

    return count;


}


