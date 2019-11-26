//
// Created by Max on 2019-11-12.
//

#include <vector>
#include <iostream>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int first_max=INT32_MAX;
    int second_max=INT32_MAX;

   for(int num:nums){
       if(num<=first_max){
           first_max=num;

       }else{
           if(num<=second_max){
               second_max=num;

           } else{
               return true;

           }
       }
   }
return false;

}



//int main(){
//    vector<int> num={2,1,3};
//    cout<<increasingTriplet(num);
//
//}