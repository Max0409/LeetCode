//
// Created by Max on 2019-11-22.
//

#include <string>
using namespace std;
int strStr(string haystack, string needle) {


    for(int i=0;i<(haystack.size()-needle.size()+1);i++){
        string temp=haystack.substr(i,needle.size());

        if(temp==needle){
            return i;

        }
    }


    return -1;


}