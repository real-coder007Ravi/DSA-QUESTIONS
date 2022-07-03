#include<iostream>
using namespace std;
#include<string>
#include<stack>
bool isBalanced(string s){
    stack<char>s1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            s1.push(s[i]);
        }
        else if(s[i]==')'){
            if(s1.empty()){
                return false;
            }
            else if(s1.top()=='('){
                    s1.pop();
                }
            else{
                return false;
            }

            }
            
        }
        return (s1.empty()?true:false);
    }
    int main(){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
   