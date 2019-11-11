//
// Created by Max on 2019-11-11.
//
using  namespace std;
#include<vector>
#include<stdlib.h>
#include<time.h>
#include <random>

class Solution {
private:
    vector<int> orginalNum;
    vector<int> nums;
    default_random_engine e;



public:
    Solution(vector<int>& nums) {
        this->orginalNum=nums;
        this->nums=nums;




    }

    vector<int> addNum(vector<int> temp,int num,int loc){
        temp.insert(temp.begin()+loc,num);
        return temp;

    }
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        nums=orginalNum;
        return orginalNum;

    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for(int i=0;i<nums.size();i++){
            int j=e()%(nums.size()-i)+i;

            swap(nums[i],nums[j]);

        }

        return nums;






    }
};

