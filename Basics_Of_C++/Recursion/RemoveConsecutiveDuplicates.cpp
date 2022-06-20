#include<iostream>
using namespace std;
void RemoveConsecutiveDuplicates(char input[]){
    if(input[0]=='\0'){
        return;
    }
    RemoveConsecutiveDuplicates(input+1);
    if(input[0]==input[1]){
        int i=2;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];

        }
        input[i-1]=input[i];
        RemoveConsecutiveDuplicates(input+1);
    }
}
int main()
{
    char input[100];
    cin>>input;
    RemoveConsecutiveDuplicates(input);
    cout<<input<<endl;
}