//
// Created by Max on 2019-12-30.
//

#include "vector"
using namespace std;



int uniquePathsWithObstacles(vector<vector<long>>& obstacleGrid) {
    int x_size=obstacleGrid.size();
    int y_size=obstacleGrid[0].size();

    vector<vector<int>> res(x_size,vector<int>(y_size,0));

    for(int x=0;x<x_size;x++){
        for(int y=0;y<y_size;y++){

            if(x==0&&y==0){
                res[0][0]=1-obstacleGrid[0][0];
            } else{
                if(x==0){
                    if(1-obstacleGrid[x][y]){
                        res[x][y]=res[x][y-1];
                    }else{
                        res[x][y]=0;

                    };

                    continue;


                }
                if(y==0){
                    if(1-obstacleGrid[x][y]){
                        res[x][y]=res[x-1][y];
                    }else{
                        res[x][y]=0;

                    };
                    continue;
                }


                if(1-obstacleGrid[x][y]){
                    res[x][y]=res[x-1][y]+res[x][y-1];
                }else{
                    res[x][y]=0;

                };

            }
        }
    }


    return res[x_size-1][y_size-1];

}