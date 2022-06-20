#include<iostream>
using namespace std;
void InsertionSort(int input[],int size){
    for(int i=1;i<size;i++){
        int current=input[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<input[j]){
                input[j+1]=input[j];
            }else{
                break;
            }
        }
        input[j+1]=current;
    }
}
int main()
{
    int input[]={10,5,2,3,11};
    InsertionSort(input,5);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}