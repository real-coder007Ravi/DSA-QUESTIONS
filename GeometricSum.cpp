#include<iostream>
using namespace std;
#include<cmath>
double GeometricMean(int k){
    if(k==0){
        return 1;
    }
    double ans=GeometricMean(k-1);
    return ans+(1/(double)pow(2,k));
}
int main()
{
    int num;
    cin>>num;
    cout<<GeometricMean(num)<<endl;
}
