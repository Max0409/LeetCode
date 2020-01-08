//
// Created by Max on 2020-01-06.
//
using namespace std;

#include <string>
#include <iostream>

void helper(string &s,int l,int r){
    while (l<r){
        char temp=s[l];

        s[l]=s[r];
        s[r]=temp;

        l++;
        r--;

    }



}

std::string& trim(std::string &s)
{
    if (s.empty())
    {
        return s;
    }

    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}

string reverseWords(string s) {
    int l=0;
    int r=0;

    trim(s);

    if(s==""){
        return s;

    }
    helper(s,0,s.size()-1);



    while (r<s.size()-1){
        if(s[r]==' '){
            helper(s,l,r-1);


            r++;
            l=r;

        } else{
           r++;


        }

    }

    helper(s,l,s.size()-1);
    for(int i=1;i<s.size()-1;i++){
        if(s[i]==' '&&s[i-1]==' '){
            s.erase(s.begin()+i);
            i--;

        }
    }


    return s;


}

