#include<iostream>
using namespace std;
int Indexes(int arr[],int size,int x,int output[]){
    if(size==0){
        return -1;
    }
    int ans=Indexes(arr+1,size-1,x,output);
    if(arr[0]==x){
        for(int i=ans-1;i>=0;i--){
            output[i+1]=output[i]+1;
        }
        output[0]=0;
        ans++;
    }else{
        for(int i=ans-1;i>=0;i++){
            output[i]=output[i]+1;
        }
    }
    return ans;
    
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
    int *output=new int[n];
    int ans1=Indexes(arr,n,x,output);
    for(int i=0;i<ans1;i++){
        cout << output[i] << endl;
    }
    delete []arr;
    delete[]output;
    
    

}