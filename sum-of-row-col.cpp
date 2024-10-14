#include <iostream>
using namespace std;
int main()
{
    int row, col, row_num, col_num, sum = 0;

    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of col : ";
    cin >> col;
    int arr[row][col];

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

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter row number to get its sum : ";
    cin >> row_num;
    cout << "Enter column number to get its sum : ";
    cin >> col_num;

    for (int k = 0; k < row; k++)
    {
        sum += arr[k][row_num];
    }

    cout << "The sum of row " << row_num << " is : " << sum << endl;
    sum = 0;

    for (int k = 0; k < row; k++)
    {
        sum += arr[col_num][k];
    }

    cout << "The sum of col " << col_num << " is : " << sum;

    return 0;
}
