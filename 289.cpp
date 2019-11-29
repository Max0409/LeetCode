//
// Created by Max on 2019-11-29.
//
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int count_live_number(vector<vector<int>>& board,int x,int y){
    int count=0;
    int x_size=board.size();
    int y_size=board.size();

    if(x>=1&&y>=1&&board[x-1][y-1]>=1){
        count++;
    }
    if(x>=1&&board[x-1][y]>=1){
        count++;
    }
    if(y>=1&&board[x][y-1]>=1){
        count++;
    }
    if((y+1)<y_size&&x>=1&&board[x-1][y+1]>=1){
        count++;
    }
    if((x+1)<x_size&&y>=1&&board[x+1][y-1]>=1){
        count++;
    }
    if((y+1)<y_size&&board[x][y+1]>=1){
        count++;
    }
    if((x+1)<x_size&&board[x+1][y]>=1){
        count++;
    }
    if((x+1)<x_size&&(y+1)<y_size&&board[x+1][y+1]>=1){
        count++;
    }

    return count;


}

void gameOfLife(vector<vector<int>>& board) {
    if(board.empty()){
        return ;

    }
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            int count=count_live_number(board,i,j);
            if(board[i][j]==1&&count<2){board[i][j]=2;
                break;}
            if(board[i][j]==1&&count>3){board[i][j]=2;
                break;}
            if(board[i][j]==0&&count==3){board[i][j]=-1;}
        }
    }

//    for(int i=0;i<board.size();i++){
//        for(int j=0;j<board[0].size();j++) {
//            cout<<board[i][j]<<" ";
//        }
//    }


    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++) {
            if((board[i][j]==1)||(board[i][j]==-1)){board[i][j]=1;}
            else board[i][j]=0;
        }
    }




}


int main(){
    vector<vector<int>> re={{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    gameOfLife(re);
    for(vector<int> ve:re){
        for(int x:ve){
            cout<<x<<" ";

        }
    }

}