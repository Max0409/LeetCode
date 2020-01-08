//
// Created by Max on 2019-12-11.
//

#include <vector>
#include <iostream>
using namespace std;



    int search(vector<int>& nums, int target) {
        if(nums.empty()){
            return -1;
        }
        if(nums.size()==1){
            return nums[0]==target?0:-1;

        }
        int l=0;
        int r=nums.size()-1;


        while(l<(r-1)){

            int middle=(l+r)/2;
            if(nums[middle]>nums[r]){
                l=middle;
            } else{
                r=middle;
            }
        }


        int l1;
        int r1;

        if(target>=nums[0]){
            l1=0;
            r1=r-1;
        } else{
            l1=r;
            r1=nums.size()-1;

        }

        if(nums[l]<nums[r]){
            l1=0;
            r1=nums.size()-1;

        }
        while (l1<r1){
            int middle=l1+(r1-l1)/2;

            if(nums[middle]==target){
                return middle;
            }
            if(nums[middle]<target){


                l1=middle+1;
            }
            if(nums[middle]>target){


                r1=middle;
            }
        }





        return nums[l1]==target?l1:-1;



    }


