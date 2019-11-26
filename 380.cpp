//
// Created by Max on 2019-11-22.
//

#include <cstdlib>
#include <unordered_set>
using namespace std;


class RandomizedSet {
public:
    /** Initialize your data structure here. */


    unordered_set<int> my_set;


    RandomizedSet() {



    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(my_set.count(val)==0){
            my_set.insert(val);
            return true;

        }

        return false;



    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {

        if(my_set.count(val)!=0){
            my_set.erase(val);
            return true;

        }

        return false;


    }

    /** Get a random element from the set. */
    int getRandom() {
       int loc=rand()%my_set.size();
        unordered_set<int>::iterator it;
        it=my_set.begin();
        advance(it,loc);

        return *it;

    }
};