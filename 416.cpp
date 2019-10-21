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

    sort(nums.begin(),nums.end());
//    cout<<nums[size-1]<<" ";
//    cout<<sum;
    //if(nums[size-1]>sum){return false;}
    return help(nums,sum,nums.size()-1);



}

int main(){
    vector<int> nums={1,2,5};
    canPartition(nums);
}