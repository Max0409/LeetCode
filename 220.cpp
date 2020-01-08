//
// Created by Max on 2020-01-05.
//
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;



bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    unordered_set<int> set;
    for(int i=0;i<nums.size();i++){
        int n=nums[i];

        if(set.find(t-n)!=set.end()){
            return true;

        }

        set.insert(n);
        if(set.size()>k){
            set.erase(nums[i-k]);

        }


    }
    return false;

}