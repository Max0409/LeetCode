//
// Created by Max on 2019-11-25.
//

#include <vector>
using namespace std;


int firstMissingPositive(vector<int>& nums) {

    for(int i=0;i<nums.size();i++){
        while(nums[i]>0&&nums[i]<=nums.size()&&nums[i]!=(i+1)){
            int loc=nums[i]-1;
            if(nums[loc]==nums[i])
                break;

            swap(nums[loc],nums[i]);

        }

    }


    for(int i=0;i<nums.size();i++){

        if(nums[i]!=i+1){
            return i+1;

        }
    }

    return nums.size()+1;


}