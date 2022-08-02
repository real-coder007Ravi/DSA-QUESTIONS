#include <iostream>
using namespace std;
#include <climits>
int minCostPath_Helper(int **input, int totalRows, int totalColumns, int currRow, int currCols, int **output)
{
    if (currRow == totalRows - 1 && currCols == totalColumns - 1)
    {
        return input[currRow][currCols];
    }
    if (currRow >= totalRows || currCols >= totalColumns)
    {
        return INT_MAX;
    }
    if (output[currRow][currCols] != -1)
    {
        return output[currRow][currCols];
    }
    int x = minCostPath_Helper(input, totalRows, totalColumns, currRow + 1, currCols, output);
    int y = minCostPath_Helper(input, totalRows, totalColumns, currRow, currCols + 1, output);
    int z = minCostPath_Helper(input, totalRows, totalColumns, currRow + 1, currCols + 1, output);
    int ans = min(x, min(y, z)) + input[currRow][currCols];
    output[currRow][currCols] = ans;
    return ans;
}
int minCostPath_mem(int **input, int n, int m)
{
    int **output = new int *[n];
    for (int i = 0; i < n; i++)
    {
        output[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            output[i][j] = -1;
        }
    }
    return minCostPath_Helper(input, n, m, 0, 0, output);
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
    cout << minCostPath_mem(arr, n, m) << endl;
}