#include<iostream>
using namespace std;
#include<cstring>
void ReplacePi(char input[]){
    int len=strlen(input);
    if(len==0||len==1){
        return;
    }
    if(input[0]=='p'&&input[1]=='i'){
        input[0]='3';
        input[1]='.';
        for(int i=len+2;i>1;i--){
            input[i]=input[i-2];
        }
        input[2]='1';
        input[3]='4';    }
        ReplacePi(input+1);
}


int main()
{
    char input[100];
    cin>>input;
    ReplacePi(input);
    cout<<input<<endl;
}