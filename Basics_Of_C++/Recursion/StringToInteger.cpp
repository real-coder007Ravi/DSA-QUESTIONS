#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int StringToInteger(char input[],int len){
    
    if(len==1){
        int ans=input[0]-'0';
        return ans;
    }
    int ans=StringToInteger(input+1,len-1);
    int b=input[0]-'0';
    return b*pow(10,len-1)+ans;

}
int main()
{
    char  input[100];
    cin>>input;
    int len=strlen(input);
    int ans=StringToInteger(input,len);
    cout<<ans<<endl;
}