//
// Created by Max on 2019-11-06.
//
using namespace std;

#include "string"
#include "iostream"
#include "vector"
#include "stack"

int calculate(string s) {
    int index = 0;
    if( !s.empty())
    {
        while( (index = s.find(' ',index)) != string::npos)
        {
            s.erase(index,1);
        }
    }


    stack<int> nums;
    stack<bool> isAdd;
    stack<int> nums1;
    stack<bool> isAdd1;
    bool isLastNum=false;


    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            i++;
            continue;
        }
        if(s[i]<='9'&&s[i]>='0'){
            if(isLastNum){
                int temp=nums.top();
                nums.pop();
                nums.push((s[i]-'0')+temp*10);


            }else{
                nums.push(s[i]-'0');
                isLastNum=true;
            };
            continue;

        }

        if(s[i]=='*'){
            int a=nums.top();
            nums.pop();
            int b=s[i+1]-'0';
            i+=2;
            while(s[i]<='9'&&s[i]>='0'){
                b=b*10+(s[i]-'0');
                i++;
            }
            nums.push(a*b);
            i--;

            isLastNum=false;
            continue;
        }

        if(s[i]=='/'){
            int a=nums.top();
            nums.pop();

            int b=s[i+1]-'0';
            i+=2;
            while(s[i]<='9'&&s[i]>='0'){
              b=b*10+(s[i]-'0');
              i++;
            }

            nums.push(a/b);
            i--;
            isLastNum=false;
            continue;

        }

        if(s[i]=='+'){
            isAdd.push(true);
            isLastNum=false;
            continue;
        }

        if(s[i]=='-'){
            isAdd.push(false);
            isLastNum=false;
            continue;


        }




    }
    while (!nums.empty()){
        nums1.push(nums.top());
        nums.pop();

    }
    while (!isAdd.empty()){
        isAdd1.push(isAdd.top());
        isAdd.pop();

    }
    nums=nums1;
    isAdd=isAdd1;


    while(!isAdd.empty()){
        if(isAdd.top()){
            int a=nums.top();
            nums.pop();
            int b=nums.top();
            nums.pop();
            nums.push(a+b);
            isAdd.pop();

        }else{
            int a=nums.top();
            nums.pop();
            int b=nums  .top();
            nums.pop();
            nums.push(a-b);
            isAdd.pop();
        }

    }
    return nums.top();


}

