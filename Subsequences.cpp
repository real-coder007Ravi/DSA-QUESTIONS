#include<iostream>
using namespace std;
#include<vector>
void printSubsequences(int index,int arr[],vector<int>&ans,int size ){
    if(index>=size){
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()==0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;

    }
    ans.push_back(arr[index]);
    printSubsequences(index+1,arr,ans,size);
    ans.pop_back();
    printSubsequences(index+1,arr,ans,size);
}
int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int>ans;
    printSubsequences(0,arr,ans,n);
}