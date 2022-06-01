#include<iostream>
using namespace std;
#include<climits>
void intersection(int input1[],int size1,int input2[],int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]){
                cout<<input2[j]<<" ";
                input2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main()
{
     int input1[]={2 ,6 ,8, 5, 4, 3};
     int input2[]={2 ,3, 4, 7};
     intersection(input1,6,input2,4); 
}