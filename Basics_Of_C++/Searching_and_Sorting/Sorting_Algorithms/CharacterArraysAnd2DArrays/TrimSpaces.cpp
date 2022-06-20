#include<iostream>
using namespace std;
#include<cstring>
void TrimSpaces(char input[]){
    int len=strlen(input);
     int j=0;
    for(int i=0;i<len;i++){
        if(input[i]!=' '){
           input[j]=input[i];
           j++;
        }
    }
    input[j]='\0';

}
int main()
{
    char input[100];
    cin.getline(input,100);
    TrimSpaces(input);
    cout<<input<<endl;
}