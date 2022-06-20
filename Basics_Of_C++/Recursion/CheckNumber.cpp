#include<iostream>
using namespace std;
bool CheckNumber(int arr[],int size,int x){
    if(size==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }
    bool ans=CheckNumber(arr+1,size-1,x);
    if(ans){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool ans=CheckNumber(arr,n,x);
    cout<<ans<<endl;
    
    }
