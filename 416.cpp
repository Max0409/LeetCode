//
// Created by Max on 2019-10-21.
//

using  namespace std;
#include<vector>
#include <iostream>
bool help(vector<int>& nums,int sum,int loc){
    if(loc<0){
        return false;
    }
    if(sum==0){
        return true;
    }

    if(sum<0){
        return false;

    }

    return help(nums,sum-nums[loc],loc-1)||help(nums,sum,loc-1);
}
bool canPartition(vector<int>& nums) {


    int size=nums.size();
    int sum=0;
    for(int num:nums){
        sum+=num;

    }

    if(sum%2==1){
        return false;

    }
    sum=sum/2;

    vector<bool> res(sum+1,false);
    res[0]=true;
    for(int num:nums){
        for(int i=sum;i>=num;i--){
            res[i]=res[i]||res[i-num];
        }


    }


    return res[sum];





}
