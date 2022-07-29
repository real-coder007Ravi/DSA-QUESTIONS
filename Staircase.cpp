#include <iostream>
using namespace std;
//Dp Approach
int  StepsToStaircase_3(int n){
    int *dp=new int[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=n;i++){
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];

    }
    return dp[n];
}
// Memorization
int StepsToStaircase_Helper(int n, int *ans)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
        return 0;
    // Check if ans already exists
    if (ans[n] != -1)
    {
        return ans[n];
    }
    // Save the output for future use
    int output = StepsToStaircase_Helper(n - 3, ans) + StepsToStaircase_Helper(n - 2, ans) + StepsToStaircase_Helper(n - 1, ans);
    ans[n] = output;
    return output;
}
int StepsToStaircase_2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        ans[i] = -1;
    }
    return StepsToStaircase_Helper(n, ans);
}
// Brute Force Approach
int StepsToStaircase(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
    else
    {
        return StepsToStaircase(n - 3) + StepsToStaircase(n - 2) + StepsToStaircase(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << StepsToStaircase(n) << endl;
    cout << StepsToStaircase_2(n) << endl;
    cout<< StepsToStaircase_3(n)<<endl;
}