#include<iostream>
using namespace std;
int SumOfArray(int arr[],int size){
    if(size<=0){
        return 0;
    }
    
    int ans=SumOfArray(arr+1,size-1);
    return arr[0]+ans;
}
int main()
{
    int n;
    cin>>n;
    
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SumOfArray(arr,n)<<endl;
}