//
// Created by Max on 2019-11-11.
//

using namespace std;

#include <map>

#include <string>
#include <vector>
#include <iostream>

int longestSubstring(string s, int k) {
    map<char,int> count;

    for(int i=0;i<s.size();i++){
        count[s[i]]++;

    }


    vector<int> locs;


    for(int i=0;i<s.size();i++){
        if(count[s[i]]<k){
            cout<<i<<" ";

            locs.push_back(i);


        }
    }

    if(locs.empty()){
        return s.size();

    }
    int length=locs[0];

    for(int i=1;i<locs.size();i++){
        length=max(length,locs[i]-locs[i-1]-1);

    }


    return length;


}

//int main(){
//    cout<<longestSubstring("ababacb",3);
//
//}