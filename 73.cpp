//
// Created by Max on 2019-10-31.
//

//
// Created by Max on 2019-10-30.
//
using  namespace std;
#include<vector>
#include "set"

#include "string"
#include "iostream"
#include "vector"


void setZeroes(vector<vector<int>>& matrix) {
    int k=matrix.size();

    set<int> mms;
    set<int> nns;


    int m=matrix.size();
    int n=matrix[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                mms.insert(i);
                nns.insert(j);
            }

        }
    }

    for(int i:mms){
        for(int ii=0;ii<n;ii++){
            matrix[i][ii]=0;

        }
    }


    for(int i:nns){
        for(int ii=0;ii<m;ii++){
            matrix[ii][i]=0;

        }
    }


}


//int main(){
//    vector<vector<int>> nums={{1,1,1},{1,0,1},{1,1,1}};
//    cout<<nums.size();
//
//    setZeroes(nums);
//
//
//}