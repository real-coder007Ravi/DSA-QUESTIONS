#include<iostream>
#include<vector>
using namespace std;
int searchIn2DArray(int input[4][4],int n,int key){
    int i=0,j=n-1;
    while(i<n &&  j>=0){
        if(input[i][j]==key){
             cout<<i<<" "<<j<<endl;
             return 1;
        }
        else if(input[i][j]>key){
            j--;
        }
        else if(input[i][j]<key){
            i++;
        }
    }
   
    return 0;
}

int main()
{
    int input[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,46},{32,33,39,50}};
    
    
    
    cout<<searchIn2DArray(input,4,29)<<endl;
    
}