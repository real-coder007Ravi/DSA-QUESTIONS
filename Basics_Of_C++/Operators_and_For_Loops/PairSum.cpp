#include<iostream>
using namespace std;
int PairsSum(int input[],int size,int x){
    int count=0;
    for(int i=0;i<size;i++){
        int sum;
        for(int j=i+1;j<size;j++){
            sum=input[i]+input[j];
            if(sum==x){
                count++;
            }

        }
    }
    return count;
}
int main()
{
    int input[]={1 ,3, 6, 2, 5, 4, 3, 2, 4};
    cout<<PairsSum(input,9,7)<<endl;
}