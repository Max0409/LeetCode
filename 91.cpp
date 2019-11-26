//
// Created by Max on 2019-11-07.
//


using namespace std;

#include "string"
#include "iostream"
#include <vector>


int numDecodings(string s) {


    if(s[0]=='0') return 0;

    int last2=1;
    int last1=1;





    for(int i=1;i<s.size();i++){
        if(s[i]=='0'){

            if(s[i-1]=='1'||s[i-1]=='2'){
               int now=last2;
               last2=last1;
               last1=now;
                continue;



            }else{
                return 0;

            }

        }

        if(s[i-1]=='1'&&s[i]>='1'&&s[i]<='9'){
            int now=last1+last2;
            last2=last1;
            last1=now;
            continue;


        }

        if(s[i-1]=='2'&&s[i]>='1'&&s[i]<='6'){
            int now=last1+last2;
            last2=last1;
            last1=now;
            continue;

        }

        int now=last1;
        last2=last1;
        last1=now;

    }




    return last1;




}


