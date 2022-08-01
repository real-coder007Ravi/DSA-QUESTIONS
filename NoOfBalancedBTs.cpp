#include<iostream>
#include<cmath>
using namespace std;
//Brute Force Approach
int countOfBalancedBTs_1(int height){
    if(height<=1)return 1;
    int x=countOfBalancedBTs_1(height-1);
    int y=countOfBalancedBTs_1(height-2);
    int mod=(int)pow(10,9)+7;
    int temp1=(int)(((long)x*x)%mod);
    int temp2=(int)((2*(long)(x)*y)%mod);
    int ans=(temp1+temp2)%mod;
    return ans;
}
//Memorization
int countOfBalancedBTs_2(int height,int *ans){
    if(height<=1)return 1;
    if(ans[height]!=-1)return ans[height];
    int x=countOfBalancedBTs_1(height-1);
    int y=countOfBalancedBTs_1(height-2);
    int mod=(int)pow(10,9)+7;
    int temp1=(int)(((long)x*x)%mod);
    int temp2=(int)((2*(long)(x)*y)%mod);
    int temp=(temp1+temp2)%mod;
    ans[height]=temp;
    return temp;


}
int countOfBalancedBTs_2(int height){
    int *ans=new int[height+1];
    for(int i=0;i<=height;i++){
        ans[i]=-1;
    }
    return countOfBalancedBTs_2(height,ans);

}
//Dp
const int mod =1e9+7;
int countOfBalancedBTs_3(int height){
    if(height==1)return 1;
    if(height==2)return 3;
    int *dp=new int[height+1];
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<=height;i++){
         int x = (int)(((long long)dp[i - 1] * dp[i - 1]) % mod);
        int y = (int)((2 * (long long)dp[i - 1] * dp[i - 2]) % mod);
        dp[i] = (int)(((long long)x + y) % mod);
        
    }
    int result=dp[height];
    return result;

}
int main()
{
    int n;
    cin>>n;
    cout<<countOfBalancedBTs_1(n)<<endl;
    cout<<countOfBalancedBTs_2(n)<<endl;
    cout<<countOfBalancedBTs_3(n)<<endl;
}