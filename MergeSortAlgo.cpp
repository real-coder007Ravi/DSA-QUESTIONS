#include<iostream>
using namespace std;
void merge(int input[],int si,int mid,int ei){
    int *output=new int[ei-si+1];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=ei){
        if(input[i]<input[j]){
            output[k]=input[i];
            i++;
            k++;

        }else{
             output[k]=input[j];
            j++;
            k++;

        }
    }
    while(i<=mid){
        output[k++]=input[i];
        i++;
    }
    while(j<=ei){
        output[k++]=input[j];
        j++;

    }
    int d=0;
    for(int i=si;i<=ei;i++){
        input[i]=output[d];
        d++;

    }
}
void mergesort(int input[],int si,int ei){
    //Base Case
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergesort(input,si,mid);
    mergesort(input,mid+1,ei);
    merge(input,si,mid,ei);

}
void MergeSort(int input[],int size){
    mergesort(input,0,size-1);
}
int main()
{
    int input[]={4,2,1,3,9,5};
    MergeSort(input,6);
    for(int i=0;i<6;i++){
   cout<<input[i];}
}