#include<iostream>
using namespace std;
#include<vector>
bool PrintSubsequencesWhoseSumToK(int index,vector<int>&ds,int initialSum,int sum,int arr[],int n){
    if(index==n){
        if(initialSum==sum){
            for(auto it:ds)cout<<it<<" ";
                cout<<endl;
                return true;
            }
            
        else return false;
    }  
    ds.push_back(arr[index]);
    initialSum+=arr[index];
    if(PrintSubsequencesWhoseSumToK(index+1,ds,initialSum,sum,arr,n)==true){
        return true;
    }
    initialSum-=arr[index];
    ds.pop_back();
    if(PrintSubsequencesWhoseSumToK(index+1,ds,initialSum,sum,arr,n)==true){
        return true;
    }
    return false;
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    PrintSubsequencesWhoseSumToK(0,ds,0,sum,arr,n); 
}