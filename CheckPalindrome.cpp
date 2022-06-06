#include<iostream>
using namespace std;
#include<cstring>
bool CheckPalindrome(char input[]){
    int i=0,j=strlen(input)-1;
    while(i<j){
        if(input[i]!=input[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char input[10];
    cin>>input;
    cout<<CheckPalindrome(input);

}