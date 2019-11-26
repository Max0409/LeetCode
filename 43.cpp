//
// Created by Max on 2019-11-13.
//

#include <string>
#include <vector>
using namespace std;



int trap(vector<int>& height) {
    vector<int> leftMax(0,height.size());
    vector<int> rightMax(0,height.size());




    for(int i=1;i<height.size();i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);

    }

    for(int i=height.size()-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i+1]);

    }

    int re=0;
    for(int i=0;i<height.size();i++){
        int temp=min(leftMax[i],rightMax[i])-height[i];
        if(temp>0){
            re+=temp;

        }

    }

    return re;


}