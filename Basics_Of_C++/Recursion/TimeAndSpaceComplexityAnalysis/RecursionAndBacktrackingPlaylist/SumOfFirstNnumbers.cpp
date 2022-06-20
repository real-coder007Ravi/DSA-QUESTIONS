#include<iostream>
using namespace std;
//Parametrised Recursion
void SumOfFirst(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;

    }
    SumOfFirst(n-1,sum+n);
    
}
//Functional Recursion
int Sum(int n){
    if(n==0){
        return 0;

    }
    return n+Sum(n-1);

}
int main()
{
    int n;
    cin>>n;
    SumOfFirst(n,0);
    cout<<Sum(n)<<endl;
}