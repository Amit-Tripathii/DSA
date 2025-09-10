#include <iostream>
using namespace std;
bool linearSearch(int mat[][3], int rows, int cols, int key)
{
    // Linear Search

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
      
    }
      return false;
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // int matrix[4][3];
    int rows = 4;
    int columns = 3;
    cout << linearSearch(matrix, rows, columns, 20);

    // cout<<matrix[2][1];
    // //Input
    //     for(int i=0;i<rows;i++){
    //         for(int j=0;j<columns;j++){
    //             cin>>matrix[i][j];
    //         }

    //     }

    // Output
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}