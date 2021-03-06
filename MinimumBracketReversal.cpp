#include<iostream>
#include<stack>
#include<string>
using namespace std;
int BracketReversal(string input){
    if(input.size()%2!=0){
        return -1;
    }
    stack<int>s;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]=='{'){
             s.push(input[i]);
        }
        else{
            if(s.empty()){
                s.push(input[i]);
            }
            else if(s.top()=='{'){
                s.pop();
            }
            else if(s.top()=='}'){
                s.push(input[i]);
            }
        }
    }
    int count=0;
    while(!s.empty()){
        char c1=s.top();
        s.pop();
        char c2=s.top();
        s.pop();
        if(c1==c2){
            count++;

        }
        else if(c1=='{'&&c2=='}'){
            count+=2;
        }}
        return count;

        }

 
int main()
{
    string input;
    cin>>input;
    cout<<BracketReversal(input)<<endl;
}