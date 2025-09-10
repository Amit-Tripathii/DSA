#include <iostream>

using namespace std;
pair<int, int> linearSearch(int mat[][3], int rows, int cols, int key)
{
    // Linear Search which returns the value in pair

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

int getMaxSum(int mat[][3], int rows, int col)
{
    int maxColSum = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        int colSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colSum += mat[j][i];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // int matrix[4][3];
    int rows = 4;
    int columns = 3;
    pair<int, int> result = linearSearch(matrix, rows, columns, 10);
    cout << "(" << result.first << "," << result.second << ")";
    cout << endl;
    cout << getMaxSum(matrix, rows, columns);
}