#include<iostream>
using namespace std;
#include<stack>
void reverseStack(stack<int>&input,stack<int>&extra){
    if(input.empty()){
        return;
    }
    int LastElement=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty()){
        int s=input.top();
        input.pop();
        extra.push(s);
    }
    input.push(LastElement);
    while(!extra.empty()){
        int a=extra.top();
        extra.pop();
        input.push(a);
    }
   
}

int main()
{
   stack<int>input,extra;
   int size;
   cin>>size;
   for(int i=0,val;i<size;i++){
    cin>>val;
    input.push(val);
   }
   reverseStack(input,extra);
   while(!input.empty()){
    cout<<input.top()<<" ";
    input.pop();
   }
}