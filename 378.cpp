//
// Created by Max on 2019-11-06.
//

using namespace std;

#include "string"
#include "iostream"
#include "vector"
int countSmaller(vector<vector<int>>& matrix,int n){
    int count=0;


    for(int i=0;i<matrix.size();i++){
        if(matrix[i][0]>n){
            continue;

        }
        for(int j=0;j<matrix.size();j++){

            if(matrix[i][j]>n){
                break;

            } else{
                count++;

            }
        }


    }
    return count;

}
int kthSmallest(vector<vector<int>>& matrix, int k) {

    if(matrix.empty()){
        return 0;

    }
    int low=matrix[0][0];
    int high=matrix[matrix.size()-1][matrix[0].size()-1];

    while (low<high){
        int middle=low+(high-low)/2;
        int s=countSmaller(matrix,middle);
        if(s<k){
            low=middle+1;

        } else{
            high=middle;

        }


    }


    return low;



}




