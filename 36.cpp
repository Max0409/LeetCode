//
// Created by Max on 2019-12-08.
//

#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int col[9][9]={0};
    int row[9][9]={0};
    int single_sudoku[9][9]={0};

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){


            if(col[i][j]!='.'){
                int num=col[i][j]-'0';

                col[num-1][i]+=1;


                    row[num-1][j]+=1;

                int loc=(i/3)*3+j/3;

                single_sudoku[loc][num-1]+=1;
                if(col[num-1][i]>=2||row[num-1][j]>=2|| single_sudoku[loc][num-1]>=2) {
                    return false;

                }

                }

            }


        }

    return true;
    }

