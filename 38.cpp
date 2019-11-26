//
// Created by Max on 2019-11-06.
//

using namespace std;

#include <string>
#include <iostream>


string help(string s){
    string re="";
    int last=-1;
    int count=0;


    for(int i=0;i<s.size();i++){
        if(last==-1){
            last=(s[i]-'0');
            count++;
        }else{
            if((s[i]-'0')==last){
                count++;


            }else{
                re+=(count+'0');
                re+=(last+'0');
                count=1;
                last=s[i]-'0';


            }


        }




    }

    re+=(count+'0');
    re+=(last+'0');
    return re;

}
string countAndSay(int n) {
    if(n<=0){
        return "";

    }
    string re="1";

    for(int i=0;i<n-1;i++){
        re=help(re);

    }

    return re;


}

//int main(){
//   cout<< countAndSay(5);
//
//}