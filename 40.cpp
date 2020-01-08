//
// Created by Max on 2019-12-24.
//
#include "vector"
using namespace std;

#include "iostream"

vector<vector<int>> res;
void helper(vector<int>& candidates, int target,vector<int> re,int start){
    if(target<0){ return;}
    if(target==0){res.push_back(re);
        return;}
    for(int i=start;i<candidates.size();i++){
        if(i>start&&candidates[i]==candidates[i-1])continue;



            re.push_back(candidates[i]);




            helper(candidates,(target-candidates[i]),re,i+1);
            re.pop_back();





    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {



    vector<int> re;

    sort(candidates.begin(),candidates.end());

    helper(candidates,target,re,0);
    return  res;







}


