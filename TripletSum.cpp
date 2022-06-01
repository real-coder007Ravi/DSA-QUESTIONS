#include<iostream>
using namespace std;
int tripletSum(int input[],int size,int x){
    int count=0;
    for(int i=0;i<size;i++){
        int sum;
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
            sum=input[i]+input[j]+input[k];
            if(sum==x){
                count++;
            }

        }
    }}
    return count;
}

int main()
{
    int input[]={1 ,2, 3, 4, 5, 6 ,7 };
    cout<<tripletSum(input,7,12);
}