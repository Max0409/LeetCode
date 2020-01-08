//
// Created by Max on 2019-12-11.
//
#include <vector>
#include <string>
using namespace std;


int stringToInt(string s){
    int n=0;
    for(char c:s){

          int i=c-'0';
          n=n*2+i;


    }

    return n;


}

vector<int> grayCode(int n) {
    if(n==0){
        return {};

    }

    vector<string> res_s={"0","1"};

    for(int i=2;i<=n;i++){
        int size=res_s.size();
        for(int i=size-1;i>=0;i--){
            res_s.push_back("1"+res_s[i]);

        }

        for(int i=0;i<size;i++){

            res_s[i]="0"+res_s[i];

        }



    }


    vector<int> res;
    for(string s: res_s){
        res.push_back(stringToInt(s));

    }
    return res;





}