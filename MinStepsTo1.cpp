#include<iostream>
using namespace std;
#include<climits>
//Dp Approach
int minStepsTo1_3(int n){
    int *dp=new int[n+1];
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
     
    for(int i=4;i<=n;i++){
        int a=n,b=n;
        if(i%2==0){
            a=dp[i/2];
        }
        if(i%3==0){
            b=dp[i/3];
        }
        dp[i]=min(dp[i-1],min(a,b))+1;}
        return dp[n];}
        

    


//Memorization Approach
int minStepsTo1_Helper(int n,int *ans){
    if(n<=1)return 0;
    //Check if ans already exists
    if(ans[n]!=-1){
        return ans[n];
    }
    int a=minStepsTo1_Helper(n-1,ans);
    int b=INT_MAX;
    int c=INT_MAX;
    if(n%2==0){
        b=minStepsTo1_Helper(n/2,ans);
    }
    if(n%3==0){
        c=minStepsTo1_Helper(n/3,ans);
    }
    int output=min(a,min(b,c))+1;
    ans[n]=output;
    return output;
}
int minStepsTo1_2(int n){
    int *ans=new int[n+1];
    for(int i=0;i<n+1;i++){
        ans[i]=-1;
    }
    return minStepsTo1_Helper(n,ans);

}
//Brute Force Approach
int minStepsTo1(int n){
   if(n==1){
      return 0;
   }
   int x=minStepsTo1(n-1);
   int y=INT_MAX,z=INT_MAX;
   if(n%2==0){
    y=minStepsTo1(n/2);}
   if(n%3==0){
   z=minStepsTo1(n/3);}
   return min(x,min(y,z))+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<minStepsTo1(n)<<endl;
    cout<<minStepsTo1_2(n)<<endl;
    cout<<minStepsTo1_3(n)<<endl;
}