#include<iostream>
using namespace std;
#include<cstring>
void RemoveCharacter(char input[],char c){
    int j=0;
    for(int i=0;i<strlen(input);i++){
        if(input[i]!=c){
            input[j]=input[i];
            j++;
        }


    }
    input[j]='\0';
}
int main()
{
    char input[100];
    cin>>input;
    RemoveCharacter(input,'c');
    cout<<input<<endl;
}