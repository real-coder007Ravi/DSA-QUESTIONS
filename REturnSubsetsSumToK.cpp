#include<iostream>
using namespace std;
int SubsetsSumTok(int arr[],int size,int start,int output[][50],int k){
          if(size==start){
            if(k==0){
               output[0][0]=0;
               return 1;
          }else{
            return 0;
          }
          int smallOutput1[100][50];
          int smallOutput2[100][50]
          int ans1=SubsetsSumTok(arr,size,start+1,output,k);
          int ans2=SubsetsSumTok(arr,size,start+1,output,k-arr[start]);
          int row=0;
          for(int i=0;i<ans1;i++){
            for(int j=0;j<=smallOutput2[i][0];j++){
                output[row][j]=smallOutput1[i][j];}
                row++;
          }
          for(int i=0;i<ans2;i++){}
          output[row][0]=smallOutput2[i][0]+1;
          output[row][1]=arr[start];
          for(int j=1;j<=smallOutput2[i][0];j++){
                 output[row][j+1]=smallOutput2[i][j];}
                 row++;
          }
          return row;}





int SubsetsSum(int arr[],int size,int output[][50],int k){
    return SubsetsSumToK(arr,size,0,output,k);
      
int main()
{
    int arr[]={3,2,5,1,4,6};
    int output[50][50];
    int size=SubsetsSumToK(arr,size,output,k);
    
    for(int i=0;i<size;i++){
        for(int j=0;j<=output[i][0];j++){
        cout<<output[i][j]<<" ";}
        cout<<endl;}
      
}