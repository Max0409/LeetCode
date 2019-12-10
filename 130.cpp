//
// Created by Max on 2019-12-10.
//

#include <vector>
#include <iostream>
using namespace std;



void dfs(vector<vector<char>>& board,vector<vector<int>>& flags,int x,int y){

    int row_size=board.size();
    int col_size=board[0].size();

    if(x<0||x>=row_size||y<0||y>=col_size||board[x][y]=='X'){
        return;
    }

    if(flags[x][y]==1){
        return;
    }

    flags[x][y]=1;
    dfs(board,flags,x,y+1);
    dfs(board,flags,x+1,y);
    dfs(board,flags,x-1,y);
    dfs(board,flags,x,y-1);



}



void solve(vector<vector<char>>& board) {
    if(board.empty()){
        return;
    }
    int row_size=board.size();
    int col_size=board[0].size();

    vector<vector<int>> flags(row_size,vector<int>(col_size,0));


    for(int i=0;i<row_size;i++){
        dfs(board,flags,i,0);


    }

    for(int i=0;i<row_size;i++){
        dfs(board,flags,i,col_size-1);


    }




    for(int i=1;i<col_size-1;i++){
        dfs(board,flags,0,i);
    }

    for(int i=1;i<col_size-1;i++){
        dfs(board,flags,row_size-1,i);
    }

    for(int i=0;i<row_size;i++){
        for(int j=0;j<col_size;j++){
            cout<<flags[i][j];

        }
        cout<<endl;

    }

//    for(int i=0;i<row_size;i++){
//        for(int j=0;j<col_size;j++){
//            if(flags[i][j]==1){
//                board[i][j]='O';
//
//            }
//        }
//    }

}



int main(){
    //vector<vector<char >> chars={{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    vector<vector<char >> chars={{'O','O'},{'O','O'}};
    solve(chars);

}

