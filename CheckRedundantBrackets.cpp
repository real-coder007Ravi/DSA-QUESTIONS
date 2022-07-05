#include<iostream>
using namespace std;
#include<stack>
#include<string>
bool CheckRedundant(string expression){
    stack<int>s;
    for(int i=0;expression[i]!='\0';i++){
        if(expression[i]!=')'){
            s.push(expression[i]);

        }
        else{
            int count=0;
            while(s.top()!='('){
                count++;
                s.pop();
            }
            s.pop();
            if(count==0||count==1){
                return true;
            }}
            }
            return false;

        

    }

int main()
{
    string expression;
    cin>>expression;
    cout<<CheckRedundant(expression);
}