//
// Created by Max on 2019-11-08.
//

#include "string"
#include "iostream"
#include "vector"//
#include <map>
#include <set>
using namespace std;

int findPeakElement(vector<int>& nums) {

    int l=0;
    int r=nums.size()-1;
    int middle;

    while(l<r){
        middle=(l+r)/2;
        if(nums[middle]>nums[middle+1]){
            r=middle;

        } else{
            l=middle+1;

        }

    }


    return l;

    


}