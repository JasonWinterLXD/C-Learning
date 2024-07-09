#include <iostream>
using namespace std;

int main()
{
    // 将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int temp;

    cout << "原数组为：\n"; // 输出原数组，以便对照
    for (int i = 0; i < 9; i++)
    {
        if (i < 8)
        {
            cout << arr[i] << ",";
        }
        else
        {
            cout << arr[i] << "\n";
        }
    }

    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "排序后，数组为：\n";
    for (int i = 0; i < 9; i++)
    {
        if (i < 8)
        {
            cout << arr[i] << ",";
        }
        else
        {
            cout << arr[i] << "\n";
        }
    }

    system("pause");

    return 0;
}
