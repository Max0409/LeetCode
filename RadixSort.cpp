//
// Created by Max on 2019-10-17.
//
#include <iostream>

using  namespace std;


bool rxsort(int A[],int l,int h,int d,int k ){
    if(NULL==A||l>h){
        return false;
    }

    int size=h-l+1;
    int* counts=new int[k];
    int* temp=new int[size];
    int index;
    int pval=1;
    for(int i=0;i<d;i++){
        //counts数组清零
        for(int j=0;j<k;j++){
            counts[j]=0;
        }

        for(int j=l;j<=h;j++){
            index=(int)(A[j]/pval)%k;


        }

        counts[index]++;

    }

    for(int j=1;j<k;j++){
        counts[j]=counts[j]+counts[j-1];

    }
    for(int j=h;j>=l;j--){
        index=(int)(A[j]/pval)%k;
        temp[counts[index]-1]=A[j];
        counts[index]--;
    }


    for(int j=0;j<size;j++)
        A[j+l]=temp[j];
    pval=pval*k;


    delete[] counts;
    delete[] temp;

}








