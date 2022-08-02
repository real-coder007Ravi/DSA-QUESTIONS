#include<iostream>
using namespace std;
int LCS_DP(string s,string t){
    int rows=s.size();
    int cols=t.size();
    int **output=new int*[rows+1];
    for(int i=0;i<=rows;i++){
        output[i]=new int[cols+1];
    }
    //Fill First Row
    for(int j=0;j<=cols;j++){
        output[0][j]=0;
    }
    //Fill First Column
    for(int i=1;i<=rows;i++){
        output[i][0]=0;
    }
    //Fill Rest
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(s[rows-i]==t[cols-j]){
               output[i][j]=1+output[i-1][j-1];
            }
            else{
                 int a=output[i-1][j];
                 int b=output[i][j-1];
                 int c=output[i-1][j-1];
                 output[i][j]=max(a,max(b,c));
            }

        }
    }
    return output[rows][cols];

}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<LCS_DP(s,t)<<endl;
}