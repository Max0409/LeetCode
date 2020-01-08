//
// Created by Max on 2020-01-03.
//

using  namespace std;
#include <vector>
#include <string>
#include <iostream>

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
    if(nums.empty()){
        return res;

    }

    int startLoc=0;
    int endLoc=0;

   while (endLoc<nums.size()-1){
       if(nums[endLoc+1]==nums[endLoc]+1){
           endLoc++;


       }else{

           if(endLoc==startLoc){
               string s=to_string(nums[endLoc]);
               res.push_back(s);

           } else{
               string s=to_string(nums[startLoc])+"->"+to_string(nums[endLoc]);
               res.push_back(s);
           }
           startLoc=endLoc+1;
           endLoc=startLoc;

       }
   }

    if(endLoc==startLoc){
        string s=to_string(nums[endLoc]);
        res.push_back(s);

    } else{
        string s=to_string(nums[startLoc])+"->"+to_string(nums[endLoc]);
        res.push_back(s);
    }

    return res;

}


