#include<iostream>
using namespace std;
long DecToBin(int num){
    long res=0;
    int pow=1;
    while(num>0){
        long  d=num%2;
         res+=d*pow;
        pow*=10;
        num=num/2;

    }
    return res;
}
int BinToDec(int num){
    int res=0;
    int pow=1;
    while(num>0){
        int d=num%10;
         res+=d*pow;
        pow*=2;
        num=num/10;

    }
    return res;
}
long Bin(int num){
    int count=0;
    int ans=0;
    while(num>0&&count!=4){
         ans=num%10;
        count++;
        num/=10;
    }
    return DecToBin(ans);
}
int main()
{
    int num;
    cin>>num;
    long ans=Bin(num);
    cout<<ans<<endl;
}