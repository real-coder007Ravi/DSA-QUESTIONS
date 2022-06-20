#include<iostream>
using namespace std;
#include<cstring>
bool isPalindrome(char input[],int start){
    int size=strlen(input);
    if(start>=size/2){
        return true;
    }
    if(input[start]!=input[size-start-1]){
        return false;
    }
    return isPalindrome(input,start+1);
}
int main()
{
    char input[]="madam";
    cout<<isPalindrome(input,0)<<endl;
}