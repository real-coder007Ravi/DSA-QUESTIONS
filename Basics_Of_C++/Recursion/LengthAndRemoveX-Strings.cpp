#include<iostream>
using namespace std;
int length(char input[]){
    if(input[0]=='\0'){
        return 0;

    }
    int l=length(input+1);
    return 1+l;
}
void RemoveX(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!='x'){
        RemoveX(input+1);
    }else{
        int i=1;
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
    cout<<length(input)<<endl;
    RemoveX(input);
    cout<<input<<endl;
    cout<<length(input)<<endl;
}