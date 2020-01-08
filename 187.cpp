//
// Created by Max on 2019-12-29.
//


using namespace std;

#include <vector>
#include <string>
#include <map>

vector<string> findRepeatedDnaSequences(string s) {


    vector<string> res;
    map<string,int> count;

    for(int i=0;i<s.size()-10;i++){
        string temp=s.substr(i,10);
        count[temp]++;
        if(count[temp]==2){
            res.push_back(temp);


    }


}
    return res;
}
