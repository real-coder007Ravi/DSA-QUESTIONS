#include<iostream>
using namespace std;
void printLinearlyFrom1toN(int i,int N){
    if(i>N){
        return;
    }
    printLinearlyFrom1toN(i-1,N);
    cout<<i<<endl;

}
int main()
{
    int N;
    cin>>N;
    printLinearlyFrom1toN(N,N);
}