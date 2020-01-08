//
// Created by Max on 2019-12-09.
//

#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool comp(const int &a, const int &b){

    string as=to_string(a);
    string bs=to_string(b);

    return as+ bs < bs + as;





}
string largestNumber(vector<int>& nums) {

    sort(nums.begin(),nums.end(),[](const int& a, const int& b){

        string as=to_string(a);
        string bs=to_string(b);

        return as+ bs > bs + as;



    });
    string re="";

    if(nums[0]==0){
        return "0";

    }
    for(int num:nums){

        string temp=to_string(num);

        re+=temp;

    }

    return re;



}

