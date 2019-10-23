//
// Created by Max on 2019-10-23.
//
using namespace std;

#include "string"
#include "iostream"
#include "vector"

void  helpSpiralOrder(vector<vector<int>>& matrix,int layer,vector<int>& res,int x_size,int y_size)
{

    int a=x_size%2!=0?x_size/2+1:x_size/2;
    int b=y_size%2!=0?y_size/2+1:y_size/2;

    int trueLayer=min(a,b);
    if(layer>=trueLayer){
        return ;
    }

    for(int x=layer;x<x_size-layer;x++){
        res.push_back(matrix[layer][x]);
    }

    for(int y=layer+1;y<y_size-layer;y++){
        res.push_back(matrix[y][x_size-layer-1]);
    }

    for(int x=x_size-layer-2;x>=layer&&(y_size-1-layer!=layer);x--){
        res.push_back(matrix[y_size-layer-1][x]);
    }

    for(int y=y_size-layer-2;y>=layer+1&&(x_size-1-layer!=layer);y--){
        res.push_back(matrix[y][layer]);
    }

    helpSpiralOrder(matrix,layer+1,res,x_size,y_size);

}

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> res;
    if(matrix.empty()){
        return res;
    }

    int y_size=matrix.size();
    int x_size=matrix[0].size();



    helpSpiralOrder(matrix,0,res,x_size,y_size);
    return res;


}


int main(){

    vector<vector<int>> nums={{6,9,7}};
    spiralOrder(nums);


}