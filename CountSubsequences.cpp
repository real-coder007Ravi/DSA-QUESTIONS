#include<iostream>
using namespace std;
#include<vector>
int  PrintSubsequencesWhoseSumToK(int index,int initialSum,int sum,int arr[],int n){
    if(index==n){
        if(initialSum==sum){
            return 1;
            }
        else{
            return 0;
            }
        }

    
    
    initialSum+=arr[index];
    int left=PrintSubsequencesWhoseSumToK(index+1,initialSum,sum,arr,n);
    initialSum-=arr[index];
    
    int right=PrintSubsequencesWhoseSumToK(index+1,initialSum,sum,arr,n);
    return left+right;
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    cout<<PrintSubsequencesWhoseSumToK(0,0,sum,arr,n); 
}