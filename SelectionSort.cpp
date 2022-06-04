#include<iostream>
using namespace std;
void SelectionSort(int input[],int size){
    for(int i=0;i<size-2;i++){
        int min=input[i],minindex=i;
        for(int j=i+1;j<size;j++){
            if(input[j]<min){
                min=input[j];
                minindex=j;
            }
        }
        int temp=input[i];
        input[i]=input[minindex];
        input[minindex]=temp;
    }
}
int main()
{
    int input[]={3,1,6,9,0,4};
    SelectionSort(input,6);
    for(int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
