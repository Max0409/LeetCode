
#include<vector>
using namespace std;

 class NestedInteger {
       public:
         // Return true if this NestedInteger holds a single integer, rather than a nested list.
         bool isInteger() const;

         // Return the single integer that this NestedInteger holds, if it holds a single integer
         // The result is undefined if this NestedInteger holds a nested list
         int getInteger() const;

         // Return the nested list that this NestedInteger holds, if it holds a nested list
         // The result is undefined if this NestedInteger holds a single integer
         const vector<NestedInteger> &getList() const;
     };
class NestedIterator {
public:
    vector<int> nums;
    int count=-1;

    void help(vector<NestedInteger> &nestedList){
        for(NestedInteger nestedInteger:nestedList){
            if(nestedInteger.isInteger()){
                nums.push_back(nestedInteger.getInteger());
                break;


            } else{
                vector<NestedInteger> nestedList1=nestedInteger.getList();
                help(nestedList1);

            }
        }
    }

    NestedIterator(vector<NestedInteger> &nestedList) {

        help(nestedList);

    }

    int next() {

        if(hasNext()){
            return nums[++count];

        }
        return 0;






    }

    bool hasNext() {


        return (count+1)<nums.size();

    }
};