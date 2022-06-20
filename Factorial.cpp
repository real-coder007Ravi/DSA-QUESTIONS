#include<iostream>
using namespace std;
int Factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*Factorial(n-1);
}
void factorial(int n,int fact){
    if(n<1){
        cout<<fact<<endl;
        return;
    }
    factorial(n-1,fact*n);
}
int main()
{
    cout<<Factorial(5)<<endl;
    factorial(5,1);
}