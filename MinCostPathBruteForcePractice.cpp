#include<iostream>
using namespace std;
#include<climits>
int minCostPath(int **input,int totalRows,int totalColumns,int currRow,int currCols){
    if(currRow==totalRows-1&&currCols==totalColumns-1){
        return input[currRow][currCols];
    }
    if(currRow>=totalRows||currCols>=totalColumns){
        return INT_MAX;
    }
    int x=minCostPath(input,totalRows,totalColumns,currRow+1,currCols);
    int y=minCostPath(input,totalRows,totalColumns,currRow,currCols+1);
    int z=minCostPath(input,totalRows,totalColumns,currRow+1,currCols+1);
    int ans=min(x,min(y,z))+input[currRow][currCols];
    return ans;
}
int MinCostPath_BruteForce(int **input,int totalRows,int totalColumns){
    return minCostPath(input,totalRows,totalColumns,0,0);
}
int main()
{
      int **arr, n, m;
    cin >> n >> m;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << MinCostPath_BruteForce(arr, n, m) << endl;
}