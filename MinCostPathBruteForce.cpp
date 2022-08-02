#include <iostream>
#include <climits>
using namespace std;
int MinCostPath_BruteForceHelper(int **input, int TotalRows, int TotalColumns, int currentRow, int currentColumns)
{
    if (currentRow == TotalRows - 1 && currentColumns == TotalColumns - 1)
    {
        return input[currentRow][currentColumns];
    }
    int side = INT_MAX, down = INT_MAX, diagonal = INT_MAX;
    if (currentColumns + 1 < TotalColumns)
    {
        side = MinCostPath_BruteForceHelper(input, TotalRows, TotalColumns, currentRow, currentColumns + 1);
    }
    if (currentRow + 1 < TotalRows)
    {
        down = MinCostPath_BruteForceHelper(input, TotalRows, TotalColumns, currentRow + 1, currentColumns);
    }
    if (currentRow + 1 < TotalRows && currentColumns + 1 < TotalColumns)
    {
        diagonal = MinCostPath_BruteForceHelper(input, TotalRows, TotalColumns, currentRow + 1, currentColumns + 1);
    }
    return input[currentRow][currentColumns] + min(side, min(down, diagonal));
}
int MinCostPath_BruteForce(int **input, int TotalRows, int TotalColumns)
{
    return MinCostPath_BruteForceHelper(input, TotalRows, TotalColumns, 0, 0);
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
