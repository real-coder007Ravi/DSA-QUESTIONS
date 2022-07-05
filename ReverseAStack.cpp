#include<iostream>
using namespace std;
#include<stack>
void ReverseStack(stack<int>&input,stack<int>&extra){
    if(input.empty()){
        return;
    }
    int last=input.top();
    input.pop();
    ReverseStack(input,extra);
    while(!input.empty()){
        int top=input.top();
        input.pop();
        extra.push(top);
    }
    extra.push(last);
    while(!extra.empty()){
        int top=extra.top();
        extra.pop();
        input.push(top);
    }
    
   
int main()
{
    stack<int>input;
    stack<int>extra;
    int size;
    cin>>size;
    for(int i=0,val;i<size;i++){
        cin>>val;
        input.push(val);
    }
    ReverseStack(input,extra);
    while(!input.empty()){
        cout<<input.top()<<" ";
        input.pop();
    }
}