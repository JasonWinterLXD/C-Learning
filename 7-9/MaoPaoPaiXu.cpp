#include <iostream>
using namespace std;

int main()
{
    // ������ { 4,2,8,0,5,7,1,3,9 } ������������

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int temp;

    cout << "ԭ����Ϊ��\n"; // ���ԭ���飬�Ա����
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

    cout << "���������Ϊ��\n";
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
