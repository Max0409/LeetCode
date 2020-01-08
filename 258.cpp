//
// Created by Max on 2020-01-07.
//


int helper(int num){
    int re=0;
    while (num>0){
        re+=num%10;
        num=num/10;

    }
    return re;

}
int addDigits(int num) {

    while (num>9){
        num=helper(num);

    }

    return num;


}