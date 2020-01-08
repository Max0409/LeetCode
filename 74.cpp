//
// Created by Max on 2019-12-25.
//

#include <iostream>
#include "vector"
using namespace std;




bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int x_size=matrix.size();
    int y_size=matrix[0].size();
    int loc1=0;
    int loc2=x_size*y_size-1;




    while (loc1<loc2){
        int middle=loc1+(loc2-loc1)/2;

        if (matrix[middle/y_size][middle%y_size]==target){

            return true;

        }

        if (matrix[middle/y_size][middle%y_size]<target){

           loc1=middle;


        }

        if (matrix[middle/y_size][middle%y_size]>target){

            loc2=middle+1;


        }

    }


    return false;


}

