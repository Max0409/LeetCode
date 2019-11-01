//
// Created by Max on 2019-11-01.
//

int getSum(int a, int b) {



    while(b!=0){
        int carry=a&b<<1;

        a=a^b;

        b=carry;


    }


    return a;

}