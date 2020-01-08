//
// Created by Max on 2019-12-09.
//
#include <vector>
#include <string>
using namespace std;

void dfs(vector<vector<char>>& grid,vector<vector<bool>>&flags,int i,int j){
    int row=grid.size();
    int col=grid[0].size();
    if(i<0||i>=row||j<0||j>=col){
        return ;

    }
    if(flags[i][j]== false){
        if(grid[i][j]=='1'){
            flags[i][j]= true;

            dfs(grid,flags,i-1,j);
            dfs(grid,flags,i+1,j);
            dfs(grid,flags,i,j-1);
            dfs(grid,flags,i,j+1);
        } else{
            flags[i][j]= true;
        }

    }



}
int numIslands(vector<vector<char>>& grid) {
    if(grid.empty()){
        return 0;

    }
    int row=grid.size();
    int col=grid[0].size();
    int count=0;

    vector<vector<bool>>flags(row,vector<bool>(col, false));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            if(flags[i][j]== false&&grid[i][j]=='1'){
                count=count+1;
                dfs(grid,flags,i,j);


            }


        }
    }




    return count;
}


