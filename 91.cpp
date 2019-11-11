//
// Created by Max on 2019-11-07.
//


using namespace std;

#include "string"
#include "iostream"
#include <vector>

int help(string s,int loc){
    if(loc==s.size()-1&&s[loc]=='0'){
        return 0;
    }
    if(loc>=s.size()){
        return 1;
    }
    if(loc==s.size()-1){
        return 1;
    }


    if(s[loc]>'0'||(s[loc]='2'&&s[loc+1]<='6')){
        return help(s,loc+1)+help(s,loc+2);

    }else{
        return help(s,loc+1);

    }

}
int numDecodings(string s) {
    if(s.find("0")!=string::npos){

        return 0;
    }

    return help(s,0);



}

