//
// Created by Max on 2020-01-04.
//

using namespace std;

#include <vector>
#include <iostream>

int minimumTotal(vector<vector<int>>& triangle) {
    vector<vector<int>> res;
    if(triangle.empty()){
        return 0;

    }

    if(triangle.size()==1){
        return triangle[0][0];

    }

    res.push_back({triangle[0][0]});

    for(int j=1;j<triangle.size();j++){
        vector<int> t=triangle[j];

        int size=t.size();

        vector<int> re(size,0);
        re[0]=res[res.size()-1][0]+t[0];

        re[size-1]=res[res.size()-1][size-2]+t[size-1];

        for(int i=1;i<t.size()-1;i++){

            re[i]=min(res[res.size()-1][i-1],res[res.size()-1][i])+t[i];


        }



        res.push_back(re);

    }

    vector<int> re=res.back();
    int min_re=re[0];
    for(int n:re){
        min_re=min(n,min_re);

    }

    return min_re;



}

