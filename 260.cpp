//
// Created by Max on 2020-01-08.
//


#include <set>
#include <vector>
#include <string>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {


    vector<int> res;

    set<int> temp_set;
    int temp=1;

    for(int num:nums){
        temp=temp&num;
        if(temp_set.find(temp)!=temp_set.end()){
            res.push_back(num);

        } else{

        }

        temp_set.insert(temp);


    }


    return res;

}