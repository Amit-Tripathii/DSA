#include <iostream>
using namespace std;

// int getMaxSum(int mat[][3], int rows, int col)
// {
//     int maxRowSum = INT_MIN;
//     for (int i = 0; i < rows; i++)
//     {
//         int rowSum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             rowSum += mat[i][j];
//         }
//         maxRowSum = max(maxRowSum, rowSum);
//     }
//     return maxRowSum;
// }
int diagonalSum(int mat[][4], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            else if (j==n - 1 - i)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}
int diagSum(int mat[][4],int n){
    int sum=0;
      for (int i = 0; i < n; i++){
        sum+=mat[i][i];
        if(i!=n-1-i){
            sum+=mat[i][n-i-1];
        }
      }
      return sum;

}
int main()
{
    // {
    //     int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    //
    //     int rows = 4;
    //     int columns = 3;
    // cout << getMaxSum(matrix, rows, columns) << endl;
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {14, 15, 16, 17}};
    int n = 4;
    cout << diagonalSum(matrix, n) << endl;
    cout<<diagSum(matrix,n)<<endl;
}