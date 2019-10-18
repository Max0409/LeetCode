//
// Created by Max on 2019-10-18.
//


using namespace std;
#include"vector"
#include "stdlib.h"
#include <iostream>



int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int re=1000;
    int result;

    for(int i=0;i<nums.size();i++){
        int loc1=i+1;
        int loc2=nums.size()-1;
        while (loc1<loc2){
            int temp=nums[i]+nums[loc1]+nums[loc2];
            if(temp>target){
                loc2--;
            }
            if(temp<target){
                loc1++;

            }
            if(temp==target){
                return temp;
            }

            if(abs(temp-target)<re){
                re=abs(temp-target);
                result=temp;
            }

        }

    }

    return result;


}

int main(){
    vector<int> nums={-1,1,2,-4};
    cout<< threeSumClosest(nums,1);

}