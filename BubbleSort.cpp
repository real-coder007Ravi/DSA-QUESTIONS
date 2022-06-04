#include<iostream>
using namespace std;
void bubbleSort(int input[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(input[j]>input[j+1]){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
}
int main()
{
    int input[]={10,5,1,15,8};
    bubbleSort(input,5);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
