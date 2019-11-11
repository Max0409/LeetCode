//
// Created by Max on 2019-11-11.
//
#include "string"
#include "iostream"
#include "vector"//
#include <map>
#include <set>
#include <string>
#include <iterator>
using namespace std;
 struct TrieNode{
     string s;
     vector<TrieNode*> children;

     TrieNode(string s ){
         this->s=s;

     }
 };
class Trie {
public:
    /** Initialize your data structure here. */

    TrieNode* root;

    Trie() {
        root=new TrieNode("");

    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *root1 = root;

        for (int i = 0; i < word.size(); i++) {


            vector<TrieNode *> children = root->children;
            string tempS = word.substr(0, i + 1);


            bool hasFind = false;

            for (TrieNode *child:children) {
                if (tempS == child->s) {
                    hasFind = true;
                    root = child;
                    break;

                }
            }

            if (hasFind == false) {
                TrieNode *newChild = new TrieNode(tempS);
                children.push_back(newChild);
                root = newChild;

            }




        }
        root = root1;
    }


    /** Returns if the word is in the trie. */
    bool search(string word) {

        TrieNode *root1 = root;
        bool hasfind;

       for(int i=0;i<word.size();i++){
           vector<TrieNode *> children = root->children;
           string tempS = word.substr(0, i + 1);
           hasfind=false;
           for (TrieNode *child:children) {
               if (tempS == child->s) {
                   hasfind=true;
                   root = child;
                   break;

               }
           }

           if(hasfind== false){
               root=root1;

               return false;
           }

       }

        root=root1;

        return true;


    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *root1 = root;
        bool hasfind;

        for(int i=0;i<prefix.size();i++){
            vector<TrieNode *> children = root->children;
            string tempS = prefix.substr(0, i + 1);
            hasfind=false;
            for (TrieNode *child:children) {
                if (tempS == child->s) {
                    hasfind=true;
                    root = child;
                    break;

                }
            }

            if(hasfind== false){
                root=root1;
                return false;
            }

        }
        root=root1;
        return true;

    }
};


//int main(){
//    Trie trie ;
//    trie.insert("apple");
//    cout<<trie.search("apple");   // 返回 true
//    cout<<trie.search("app");     // 返回 false
//    cout<<trie.startsWith("app"); // 返回 true
//    trie.insert("app");
//    cout<<trie.search("app");
//
//
//
//
//
//}