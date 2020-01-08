//
// Created by Max on 2019-11-11.
//

using namespace std;

#include <map>

#include <string>
#include <vector>
#include <iostream>

int help(string s, int k,int start,int end){
    if((end-start+1<k)){
        return 0;

    }
    vector<int> count(26,0);


    for(int i=start;i<=end;i++){
        count[s[i]-'a']++;

    }
    int loc=-1;

    for(int i=start;i<=end;i++){
        if(count[s[i]-'a']<k){
            loc=i;
            break;


        }
    }

    if(loc==-1){
        return (end-start+1);

    }
    return max(help(s,k,start,loc-1),help(s,k,loc+1,end));


}

int longestSubstring(string s, int k) {


    return help(s,k,0,s.size());






}
//
////int main(){
//    cout<<longestSubstring("aaabb",3);
//
//}