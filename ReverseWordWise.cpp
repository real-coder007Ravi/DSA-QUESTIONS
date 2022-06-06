#include<iostream>
using namespace std;
#include<cstring>
void Reverse(char input[],int start,int End){
    int i=start;
    int j=End;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
void WordWiseReverse(char input[]){
    int len=strlen(input);
    Reverse(input,0,len-1);
    int i=0;
    int j=0;
    int k;
    while(input[i]!='\0'){
        if(input[i]==' '){
            k=i-1;
            Reverse(input,j,k);
            j=i+1;
        }
        i++;
    }
    Reverse(input,j,len-1);
}
int main()
{
    char input[100];
    cin.getline(input,100);
    WordWiseReverse(input);
    cout<<input<<endl;
}