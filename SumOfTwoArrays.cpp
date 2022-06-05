#include<iostream>
using namespace std;
void SumOfTwoArrays(int arr1[],int size1,int arr2[],int size2,int output[]){
    int size3=max(size1,size2)+1;
    int i=size1-1;
    int j=size2-1;
    int k=size3-1;
    int carry=0;
    while(i>=0&&j>=0){
        output[k]=(arr1[i]+arr2[j]+carry)%10;
        carry=(arr1[i]+arr2[j]+carry)/10;
        i--;
        j--;
        k--;
    }
    while(i>=0){
        output[k]=(arr1[i]+carry)%10;
        carry=(arr1[i]+carry)/10;
        i--;
        k--;
    }
    while(j>=0){
        output[k]=(arr2[j]+carry)%10;
        carry=(arr2[j]+carry)/10;
        j--;
        k--;
    }
    output[0]=carry;
    return;
}
int main()
{
    int arr1[]={6 ,2, 4};
    int arr2[]={7 ,5, 6};
    int *output=new int[4];
    SumOfTwoArrays(arr1,3,arr2,3,output);
    for(int i=0;i<4;i++){
        cout<<output[i]<<" ";

    }
    cout<<endl;
}