#include<iostream>
using namespace std;
void SpiralPrint(int input[][100],int row,int col){
    int Krow=0,lcol=0,i;
    for(int i=lcol;i<col;i++){
        cout<<input[Krow][i]<<" ";
    }
    Krow++;
    for(int j=Krow;j<row;j++){
        cout<<input[j][col-1]<<" ";
    }
    col--;
    if(Krow<row){
    for(int i=col-1;i>=lcol;i--){
        cout<<input[row-1][i]<<" ";
    }
    row--;}
    if(lcol<col){
    for(int i=row-1;i>=Krow;i--){
        cout<<input[i][lcol]<<" ";
    }
    lcol++;}

}
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
   SpiralPrint(input,row,col);
}