#include<iostream>
using namespace std;
void SpiralPrint(int input[][100],int row,int col){
    int k=0,l=0,i;
    while(k<row&&l<col){
        for(int i=l;i<col;i++){
            cout<<input[k][i]<<" ";
        }
        k++;
        for(int j=k;j<row;j++){
            cout<<input[j][col-1]<<" ";
        }
        col--;
        if(k<row){
            for(int i=col-1;i>=l;i--)
            {

                    cout<<input[row-1][i]<<" ";
            }
            row--;
        }
        if(l<col){
            for(int i=row-1;i>=k;i--){
                cout<<input[i][l]<<" ";
            }
        }
        l++;
    }

}
int main()
{
    int row,col;
    cin>>row>>col;
    int input[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>input[i][j];
        }
    }
    SpiralPrint(input,row,col);
}
