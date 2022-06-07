#include<iostream>
using namespace std;
#include<cstring>
void Reverse(char input[],int start,int end){
    int i=start,j=end;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
void ReverseEachword(char input[]){
    int start=0,end=strlen(input)-1,i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]==' '){
            end=i-1;
            Reverse(input,start,end);
            start=i+1;
        }
    }
    end=i-1;
    Reverse(input,start,end);

}
int main()
{
    char input[]={ "Hello, I am Aadil!"};
    ReverseEachword(input);
    cout<<input<<endl;
}