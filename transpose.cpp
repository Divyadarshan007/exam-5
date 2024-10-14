
#include <iostream>
using namespace std;
int main()
{

    int row, col, row_num, col_num, sum = 0;

    cout << "Enter number of row : ";
    cin >> row;
    col = row;
    int arr[row][col];
    int arr2[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            arr2[i][j] = arr[j][i];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
