//
// Created by Max on 2019-12-04.
//
#include <queue>
using namespace std;


class MedianFinder {
public:
    /** initialize your data structure here. */

    priority_queue<int> lo;
    priority_queue<int,vector<int>,greater<int>>hi;



    MedianFinder() {

    }

    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();
        if(lo.size()<hi.size()){
            lo.push(hi.top());
            hi.pop();

        }

    }

    double findMedian() {


        return lo.size()>hi.size()?(double)lo.top():(lo.top()+hi.top())*0.5;

    }
};