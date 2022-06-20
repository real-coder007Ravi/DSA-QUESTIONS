#include<iostream>
using namespace std;
void ReplaceCharacterRecursively(char input[],char c1,char c2){
    if(input[0]=='\0'){
        return;
    }
    
    ReplaceCharacterRecursively(input+1,c1,c2);
    if(input[0]==c1){
        input[0]=c2;
    }
        
    
}
int main()
{
    char input[100];
    cin>>input;
    ReplaceCharacterRecursively(input,'a','x');
    cout<<input<<endl;
}