//
// Created by Max on 2019-10-23.
//

using namespace std;

#include "string"
#include "iostream"
#include "vector"//
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


    int loc1=m-1;
    int loc2=n-1;
    int loc=m+n-1;
    while(loc>=0){

        if(loc1<0){
            nums1[loc]=nums2[loc2];
            loc--;
            loc2--;
            continue;
        }

        if(loc2<0){
            nums1[loc]=nums1[loc1];
            loc--;
            loc1--;
            continue;
        }
        if(nums1[loc1]>=nums2[loc2]){
            nums1[loc]=nums1[loc1];
            loc--;
            loc1--;

        }

        if(nums2[loc2]>=nums1[loc1]){
            nums1[loc]=nums2[loc2];
            loc--;
            loc2--;

        }
    }



}



int main(){
    vector<int> nums1={2,0};
    vector<int> nums2={1};
    merge(nums1,1,nums2,1);
    for(int n:nums1){
        cout<<n<<" ";

    }


}