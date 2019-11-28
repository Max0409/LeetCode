//
// Created by Max on 2019-11-06.
//
using namespace std;

#include <vector>
#include <string>
#include <unordered_map>


void help(string temp,int left_n,int right_n,vector<string>& re){
    if(left_n==0&&right_n==0){
        re.push_back(temp);
        return;
    }


    if(left_n>0){

        help(temp+'(',left_n--,right_n++,re);

    }

    if(right_n>0){
        help(temp+')',left_n,right_n--,re);

    }

}
vector<string> generateParenthesis(int n) {



    vector<string> re;
    help("",n,0,re);
    return re;


}