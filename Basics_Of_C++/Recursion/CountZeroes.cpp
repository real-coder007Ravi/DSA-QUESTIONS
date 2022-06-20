#include<iostream>
using namespace std;
int CountZeroes(int num){
    if(num<9){
        if(num==0){
            return 1;
        }else{
            return 0;
        }
    }
    int d=num%10;
    int ans=CountZeroes(num/10);
    if(d==0){
        return 1+ans;
    }
    else{
        return ans;
    }
}
int main()
{
    int num;
    cin>>num;
    int ans=CountZeroes(num);
    cout<<ans<<endl;
}