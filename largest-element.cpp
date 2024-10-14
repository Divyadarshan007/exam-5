#include <iostream>
using namespace std;
int main()
{
    int max_num = 0, size;
    cout << "Enter the size of Array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for (int val : arr)
    {
        if (val > max_num)
        {
            max_num = val;
        }
    }

    cout << "The Largest element is : " << max_num;

    return 0;
}