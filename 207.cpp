//
// Created by Max on 2019-10-16.
//


using namespace std;

#include "string"
#include "iostream"
#include "vector"

bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> flags(s.size()+1,false);
    flags[0]=true;

    for(int i=1;i<=s.size();i++){
        for(int j=0;j<i;j++){
            if(flags[j]&&find(wordDict.begin(),wordDict.end(),s.substr(j,i-j))!=wordDict.end()){
                flags[i]=true;
                break;


            }
        }
    }

    return flags[s.size()];


}




int main(){
    vector<string> strs={"leet","code"};
    wordBreak("leetcode",strs);


}