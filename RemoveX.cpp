#include<iostream>
using namespace std;
#include<cstring>
void RemoveX(char input[]){
    int len=strlen(input);
    if(len==0||len==1){
        return;
    }
    if(input[0]!='x'){
        RemoveX(input+1);
    }else{
        int i;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        RemoveX(input);
    }
}
int main()
{
    char input[100];
    cin>>input;
    RemoveX(input);
    cout<<input<<endl;
}