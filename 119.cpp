//
// Created by Max on 2020-01-04.
//

using namespace std;

#include <vector>

vector<int> getRow(int rowIndex) {
    vector<vector<int>> res;
    for(int i=0;i<rowIndex;i++){

        vector<int> re;
        re.push_back(1);

        if(i>0){
            for(int j=0;j<res[i-1].size()-1;j++){
                re.push_back(res[i-1][j]+res[i-1][j+1]);

            }
            re.push_back(1);
        }

        res.push_back(re);


    }

    return res.back();
}