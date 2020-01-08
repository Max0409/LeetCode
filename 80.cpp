//
// Created by Max on 2019-12-29.
//

#include "vector"
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int size=nums.size();
    if(size<=2){
        return size;

    }
    for(int i=2;i<nums.size();i++){
        if(nums[i]==nums[i-2]){
            nums.erase(nums.begin()+i);
            i--;

            size--;
        }

    }

    return size;




}