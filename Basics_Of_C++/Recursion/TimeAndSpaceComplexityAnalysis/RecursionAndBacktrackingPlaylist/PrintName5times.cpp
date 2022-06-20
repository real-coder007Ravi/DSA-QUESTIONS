#include<iostream>
using namespace std;
void print(int start,int N){
    if(start>N){
        return;
    }
    cout<<"Ravi kumar Gupta"<<endl;
    print(start+1,N);
}
int main()
{
       int N;
       cin>>N;
       print(1,N);
}