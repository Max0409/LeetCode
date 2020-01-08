
//
// Created by Max on 2019-12-25.
//
#include "vector"
using namespace std;

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res={};
    int last_last_size=0;
    int last_size=0;
    if(n>0){
        for(int i=1;i<=n;i++){
            vector<int> temp;
            temp.push_back(i);
            res.push_back(temp);

        }
    }

    for(int i=1;i<k;i++){
         last_size=res.size();
        for(int j=last_last_size;j<last_size;j++){

            for(int t=res[j].back()+1;t<=k;t++){
                vector<int> re=res[j];
                re.push_back(t);
                res.push_back(re);


            }
        }

        last_last_size=last_size;

    }

    vector<vector<int>> res1;
    for(vector<int> re:res){
        if(re.size()==k){
            res1.push_back(re);

        }
    }

    return res1;


}




