//
// Created by Max on 2019-10-17.
//



using  namespace std;
#include<vector>

class Solution {
public:



static bool my_compare( const vector<int>& a, const vector<int>& b){
        if(a[0]>b[0] ) return true;
        if(a[0]==b[0]&&a[1]<b[1]) return true;

        return false;
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {


    sort(people.begin(),people.end(),my_compare );


    vector<vector<int>> res;

    for(vector<int> person:people){
        res.insert(res.begin()+person[1],person);

    }

    return res;



    }
};