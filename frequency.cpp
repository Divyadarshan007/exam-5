#include <iostream>
using namespace std;
int main()
{
    int count = 0, num = 0;
    int arr[10] = {1, 2, 3, 5, 3, 1, 4, 3, 4, 5};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            num++;
        }
        cout << "element" << i + 1 << " : " << count << endl;
        count = 0;
    }

    return 0;
}