//
// Created by Max on 2019-11-13.
//

#include <string>
#include <vector>
using namespace std;



string multiply(string num1, string num2) {
    int n1=num1.size();
    int n2=num2.size();
    string res(n1+n2,'0');
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            int temp=(res[i+j-1]-'0')+(num1[n1]-'0')*(num2[n2]-'0');
            res[i+j+1]=temp%10+'0';
            res[i+j]+=temp/10;

        }
    }


    for(int i=0;i<n1+n2;i++){
        if(res[i]!='0'){
            return res.substr(i);

        }
    }

    return "0";


}