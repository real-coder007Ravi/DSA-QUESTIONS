#include<iostream>
using namespace std;
char HighestOccuringCharacter(char input[]){
    char result;
    int i;
    int freq[256]={0};
    int len=strlen(input);
    int max=-1;

    for(i=0;i<len;i++){
        freq[input[i]]++;
    }
    for(int i=0;i<len;i++){
        if(freq[input[i]]>max){
            max=freq[input[i]];
            result=input[i];
        }
    }
    return result;
}
int main()
{
    char input[100];
    cin>>input;
    Char ans=HighestCharacter(input);
    cout<<ans<<endl;
}