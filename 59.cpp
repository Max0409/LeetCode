//
// Created by Max on 2019-10-23.
//

using namespace std;

#include "string"
#include "iostream"
#include "vector"

vector<vector<int>> generateMatrix(int n) {

    vector<vector<int>> res(n,vector<int>(n,0));
    int num=1;
    int max_layer=(n+1)/2;
    for(int layer=0;layer<max_layer;layer++){
        for(int x=layer;x<n-layer;x++){
            res[layer][x]=num;
            num++;
        }

        for(int y=layer+1;y<n-layer;y++){
            res[y][n-layer-1]=num;
            num++;

        }

        for(int x=n-layer-2;x>=layer&&(n-1-layer!=layer);x--){
            res[n-layer-1][x]=num;
            num++;

        }

        for(int y=n-layer-2;y>=layer+1&&(n-1-layer!=layer);y--){
            res[y][layer]=num;
            num++;
        }


    }
    return res;



}