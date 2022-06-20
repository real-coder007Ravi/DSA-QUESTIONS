#include<iostream>
using namespace std;
int Multiplication(int num1,int num2){
    if(num2==0||num1==0){
       return 0;

    }
    int ans=Multiplication(num1,num2-1);
    return num1+ans;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<Multiplication(num1,num2)<<endl;
}