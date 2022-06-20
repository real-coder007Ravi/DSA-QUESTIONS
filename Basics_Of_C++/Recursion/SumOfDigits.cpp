#include<iostream>
using namespace std;
int SumOfDigits(int num){
    if(num<9){
        return num;
    }
    int d=num%10;
    int ans=SumOfDigits(num/10);
    return ans+d;
    
}
int main()
{
    int num;
    cin>>num;
    cout<<SumOfDigits(num)<<endl;
}