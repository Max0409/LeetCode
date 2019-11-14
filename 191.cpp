//
// Created by Max on 2019-11-11.
//
#include <cstdint>

using namespace std;


int hammingWeight(uint32_t n) {
    int count=0;

    uint32_t num=1;
    for(int i=0;i<32;i++){
        if((n&num)!=0){
            count++;
        }
        num=num<<1;

    }

    return count;


}

