#include<iostream>
using namespace std;
int minCostPath_DP(int **input,int rows,int cols){
    int **output=new int*[rows];
    for(int i=0;i<rows;i++){
        output[i]=new int[cols];
    }
    //Fill Last Cell
    output[rows-1][cols-1]=input[rows-1][cols-1];
    //Fill Last Row
    for(int j=cols-2;j>=0;j--){
        output[rows-1][j]=input[rows-1][j]+output[rows-1][cols+1];

    }
    //Fill Last Column
    for(int i=rows-2;i>=0;i--){
        output[i][cols-1]=input[i][cols-1]+output[i+1][cols-1];

    }
    //Fill Remaining Cells
    for(int i=rows-2;i>=0;i--){
        for(int j=cols-2;j>=0;j--){
            output[i][j]=min(output[i][j+1],min(output[i+1][j],output[i+1][j+1]))+input[i][j];
        }
    }
     return output[0][0];

}
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    int **input=new int*[rows];
    for(int i=0;i<rows;i++){
        input[i]=new int[cols];

    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>input[i][j];
        }
    }
    cout<< minCostPath_DP(input,rows,cols);
}