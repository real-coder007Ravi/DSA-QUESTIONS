#include <iostream>
using namespace std;
void inplaceHeapSort(int input[],int n){
    //Build The Heap
    for(int i=1;i<n;i++){
        int childIndex=i;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(input[childIndex]<input[parentIndex]){
                int temp=input[childIndex];
                input[childIndex]=input[parentIndex];
                input[parentIndex]=temp;
            }
            else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    int size=n;
    int temp=input[0];
    input[0]=input[size-1];
    input[size-1]=temp;
    size--;
    while(size>1){
    int parentIndex=0;
    int LeftChildIndex=2*parentIndex+1;
    int RightChildIndex=2*parentIndex+2;
    while(LeftChildIndex<size){
        int minindex=parentIndex;
        if(input[minindex]>input[LeftChildIndex]){
            minindex=LeftChildIndex;
        }
        if(RightChildIndex<size&&input[minindex]>input[RightChildIndex]){
            minindex=RightChildIndex;
        }
        if(minindex==parentIndex)break;
        int temp=input[minindex];
        input[minindex]=input[parentIndex];
        input[parentIndex]=temp;
        parentIndex=minindex;
        LeftChildIndex=2*parentIndex+1;
        RightChildIndex=2*parentIndex+2;    }}

}
int main()
{
    int input[]={5,1,0,6,2};
    inplaceHeapSort(input,5);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}