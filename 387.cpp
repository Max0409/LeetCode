
//
// Created by Max on 2019-10-29.
//
using namespace std;

#include "string"
#include "iostream"
#include "vector"//
#include "map"//

 int firstUniqChar(string s) {
     map<char,int>counts;


     for(int i=0;i<s.size();i++){
         counts[s[i]]++;

     }

     for(int i=0;i<s.size();i++){
         if(counts[s[i]]==1){
             return i;
         }
     }


     return -1;
    }