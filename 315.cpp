//
// Created by Max on 2019-11-23.
//
#include <vector>
using namespace std;



vector<int> countSmaller(vector<int>& nums) {

    vector<int> re(nums.size(),0);
    for(int i=nums.size()-1;i>=0;i--){
        for(int j=i;j<nums.size();j++){
            if(nums[i]>nums[j]){
                re[i]=re[j]+1;
                break;

            }

        }
    }

    return re;

}


int main(){
    vector<int> nums={5,2,6,1};
    countSmaller(nums);

}