//
// Created by Max on 2019-10-30.
//
using  namespace std;
#include<vector>
#include "set"

#include "string"
#include "iostream"
#include "vector"


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    for(int i=0;i<numRows;i++){

        vector<int> re;
        re.push_back(1);

        if(i>0){
            for(int j=0;j<res[i-1].size()-1;j++){
                re.push_back(res[i-1][j]+res[i-1][j+1]);

            }
            re.push_back(1);
        }

        res.push_back(re);


    }

    return res;


}