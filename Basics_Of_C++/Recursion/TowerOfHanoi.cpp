#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char source,char auxiliary,char destination){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1,source,destination,auxiliary);
    cout<<source<<" "<<destination<<endl;
    TowerOfHanoi(n-1,auxiliary,source,destination);
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n,'a','b','c');
}