#include<iostream>
using namespace std;
 void help(int arr[],int size,int k,vector<int>ans){
    if(size==0){
        if(k==0){
        for(int i:ans){
            cout<<i<<" ";
            cout<<endl;
        }
        return;

    }
    help(arr+1,size-1,k,ans);
    ans.push_back(arr[0]);
    help(arr+1,size-1,k-arr[0],ans);
    return;

 }
 void printSubsetSumToK(int arr[],int size,int k){
       vector<int>ans;
        help(arr,size,k,ans);
 }

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);}
    
 
   



