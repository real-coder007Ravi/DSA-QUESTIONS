#include<iostream>
using namespace std;
void PushesZerosToEnd(int input[],int size){
    int k=0;
    for(int i=0;i<size;i++){
        if(input[i]!=0){
            int temp=input[i];
            input[i]=input[k];
            input[k]=temp;
            k++;
        }
    }
}
int main()
{
    int input[]={1,3,0,4,0,9,0,0};
    PushesZerosToEnd(input,8);
    for(int i=0;i<8;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}