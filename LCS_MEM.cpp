#include <iostream>
using namespace std;
#include <string>
int LCS_Mem(string s, string t, int **output)
{
      int m = s.size();
    int n = t.size();
    // Base Case
    if (m == 0 || n == 0)
    {
        return 0;
    }
    // Check if ans already exists
    if (output[m][n] != -1)
    {
        return output[m][n];
    }
    // Recursive Call
    int ans;
    if (s[0] == t[0])
    {
        ans = LCS_Mem(s.substr(1), t.substr(1), output);
    }
    else
    {
        int a = LCS_Mem(s.substr(1), t, output);
        int b = LCS_Mem(s, t.substr(1), output);
        int c = LCS_Mem(s.substr(1), t.substr(1), output);
        ans = max(a, max(b, c));
    }
    output[m][n] = ans;
    return ans;
}
int LCS(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int **output = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n];
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            output[i][j] = -1;
        }
    }
    return LCS_Mem(s, t, output);
}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<LCS(s,t)<<endl;
}