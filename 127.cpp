//
// Created by Max on 2019-11-26.
//


#include <string>
#include <vector>
using namespace std;

int count_used(vector<bool>& used){
    int count=0;
    for(bool u:used){
        if(u){
            count++;

        }
    }
    return count;

}

int  count_differ_char(string word1,string word2){
    int count=0;
    for(int i=0;i<word1.size();i++){
        if(word1[i]!=word2[i]){
            count++;

        }
    }

    return count;

}

bool isAllUsed(vector<bool> used){
    for(bool u:used){
        if(!u){
            return false;
        }
    }

    return true;

}

int help(string beginWord, string endWord, vector<string>& wordList,vector<bool> used){
    if(isAllUsed(used)){
        return 0;

    }
    for(int i=0;i<wordList.size();i++){
        if(!used[i]){
            int count=count_differ_char(beginWord,wordList[i]);
            if(count==0){
                return count_used(used)+2;
            }
            if(count==1){
                vector<bool> newUsed=used;
                newUsed[i]=true;
                return help(wordList[i],endWord,wordList,used);
            }

        }
    }


}
int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    vector<bool > used(wordList.size(), false);
    help(beginWord,endWord,wordList,used);




}