#include<iostream>
using namespace std;
#include<climits>
bool isValid(int arr[],int size,int k,int mid){
    int student=1;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum>mid){
            student++;
            sum=arr[i];
        }
        if(student>k){
            return false;
        }
       
    }
     return true;
}
int AllocateMinimumNoOfPages(int arr[],int size,int k){
    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int start=max;
    int end=sum;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/23;
        if(isValid(arr,size,k,mid)==true){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
int main()
{
    int arr[]={10,20,30,40};
    cout<<AllocateMinimumNoOfPages(arr,4,2)<<endl;
}