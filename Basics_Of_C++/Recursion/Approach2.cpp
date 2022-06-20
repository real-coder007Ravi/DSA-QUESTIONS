#include<iostream>
using namespace std;
#include<cstring>
int StringToInteger(char input[],int len){
    
    if(len==1){
        int ans=input[0]-'0';
        return ans;
    }
    int ans=StringToInteger(input,len-1);
    int a=input[len-1]-'0';
    return ans*10+a;
}
int main()
{
    char input[100];
    cin>>input;
    int len=strlen(input);
    int ans=StringToInteger(input,len);
    cout<<ans<<endl;
}