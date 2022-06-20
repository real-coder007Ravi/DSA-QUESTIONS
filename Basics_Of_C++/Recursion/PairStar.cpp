#include<iostream>
using namespace std;
#include<cstring>


void PairStar(char input[],int start){
    if(input[0]=='\0'){
         return;
    }
    PairStar(input,start+1);
    if(input[start]==input[start+1]){
        int len=strlen(input);
        input[len+1]='\0;
        int i;
        for(i=len-1;i>=start+1;i--){
            input[i+1]=input[i];
        }
        input[start+1]='*';

    }
}

void pairStar(char input[]){
    PairStar(input,0);
    
}
int main()
{
    char input[100];
    cin>>input;
    
    pairStar(input);
    int len=strlen(input);
    for(int i=0;i<len;i++){
        cout<<input[i]<<endl;
    }

}