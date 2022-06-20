#include<iostream>
using namespace std;
#include<cstring>
bool helper(char input[],int start,int end){
    if(input[0]=='\0'||input[1]=='\0'){
        return 1;

    }
    if(start>=end){
        return 1;
    }
    if(input[start]==input[end]){
        return helper(input,start+1,end-1);
    }else{
        return 0;
    }

}
bool CheckPalindrome(char input[]){
    int len=strlen(input);
    return helper(input,0,len-1);
}
int main()
{
    char input[100];
    cin>>input;
    bool ans=CheckPalindrome(input);
    cout<<ans<<endl;

}