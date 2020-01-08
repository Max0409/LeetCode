//
// Created by Max on 2020-01-05.
//

using namespace std;

#include <vector>

#include <string>
string getHint(string secret, string guess) {
    int countA=0;
    int countB=0;

    vector<int> flags(secret.size(),0);



    for(int i=0;i<guess.size();i++){


        if(guess[i]==secret[i]){
            flags[i]=2;

        } else{
           for(int j=0;j<guess.size();j++){
               if(flags[j]==0&&secret[j]==guess[i]){
                   flags[i]=1;

               }
           }


        }

    }



    for(int n:flags){
        if (n==2){
            countA++;

        } else{
            if(n==1){
                countB++;

            }
        }
    }

    return to_string(countA)+"A"+to_string(countB)+"B";

}