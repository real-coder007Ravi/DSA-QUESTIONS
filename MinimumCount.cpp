#include <iostream>
#include <climits>
using namespace std;
// Brute Force Approach
int minimumCount_1(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    int ans = INT_MAX;
    for (int i = 1; i * i <= n; i++)
    {
        // Recursive Call
        ans = min(ans, minimumCount_1(n - i * i));
    }
    // Small Calculation
    return ans + 1;
}
// Memorization
int minimumCount_2Helper(int n, int *ans)
{
    if(n==0)return 0;
    //Check if ans already exists
    if(ans[n]!=-1){
        return ans[n];
    }
    //Calculate and save the output for future referecne 
    int ans1=INT_MAX;
    for(int i=1;i*i<=n;i++){
        ans1=min(ans1,minimumCount_2Helper(n-i*i,ans));
    }
    int output=ans1+1;
    ans[n]=output;
    return output;
}
int minimumCount_2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return minimumCount_2Helper(n, ans);
}
// DP
int minimumCount_3(int n)
{
    if(n<=2){
        return n;
    }
    int *dp = new int[n + 1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        int minimum=n;
        for(int j=1;j*j<=i;j++){
            minimum=min(minimum,dp[i-j*j]);
        }
        dp[i]=minimum+1;
    }
    int ans=dp[n];
    return ans;
}
int main()
{
    int n;cin>>n;
    cout<<minimumCount_1(n)<<endl;
    cout<<minimumCount_2(n)<<endl;
    cout<<minimumCount_3(n)<<endl;
}