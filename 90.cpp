//
// Created by Max on 2019-12-25.
//
#include "vector"
using  namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> res={{}};
    int last_last_size=0;
    int last_size=0;
    sort(nums.begin(),nums.end());


   for(int i=0;i<nums.size();i++){


       last_size=res.size();

       if(i>0&&nums[i]==nums[i-1]){
           for(int j=last_last_size;j<last_size;j++){
               vector<int> temp=res[j];
               temp.push_back(nums[i]);
               res.push_back(temp);


           }

       }else{
           for(int j=0;j<last_size;j++){
               vector<int> temp=res[j];
               temp.push_back(nums[i]);
               res.push_back(temp);


           }
       }


       last_last_size=last_size;



   }

    return res;

}