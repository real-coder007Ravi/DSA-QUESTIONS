#include<iostream>
using namespace std;
void print2Darray(int input[][100],int row,int col){
    int k=row;
    for(int i=0;i<row;i++){
        for(int p=k-1;p>=0;p--){
        for(int j=0;j<col;j++){
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
    k--;
}}
int main()
{
    int input[100][100];
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>input[i][j];
        }
    }
    print2Darray(input,row,col);
}
