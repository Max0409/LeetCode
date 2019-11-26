//
// Created by Max on 2019-11-25.
//

#include <vector>
using namespace std;


int firstMissingPositive(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i+1){
            swap(nums[i],nums[i+1]);
            i--;

        }
    }


    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i+1){
            return i+1;

        }
    }

}