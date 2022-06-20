#include<iostream>
using namespace std;

int main()
{
    int Row,Col;
    cin>>Row>>Col;
    int input[Row][Col];
    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            cin>>input[i][j];
        }
    }
    int j=0;
    while(j<Col){
        int sum=0;
        for(int i=0;i<Row;i++){
            sum+=input[i][j];
        }
        j++;
        cout<<sum<<" ";
    }

}