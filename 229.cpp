//
// Created by Max on 2020-01-03.
//

using namespace std;

#include <vector>

vector<int> majorityElement(vector<int>& nums) {


    int num1=0;
    int num2=0;
    int cnt1=0;
    int cnt2=0;
    for(int num:nums){
        if(num==num1){
            cnt1++;
            continue;


        }

        if(num==num2){
            cnt2++;
            continue;

        }

        if(cnt1==0){
            num1=num;
            cnt1++;
            continue;


        }

        if(cnt2==0){
            num2=num;
            cnt2++;
            continue;


        }

        cnt1--;
        cnt2--;

    }

    vector<int> res;
    int count1=0;
    int count2=0;
    for(int num:nums){
        if(num==num1){
            count1++;

        }
    }

    if(count1>nums.size()/3){
        res.push_back(num1);

    }

    for(int num:nums){
        if(num==num2){
            count2++;

        }
    }

    if(count2>nums.size()/3){
        res.push_back(num2);

    }

    return res;

}