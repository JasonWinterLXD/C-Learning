#include <iostream>
using namespace std;

int main()
{
    /*
    ������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
    (��ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);
     */

    int arr1[5] = {1, 3, 2, 5, 4};
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[4-i] = arr1[i];
    }

    cout << "ԭ����Ϊ��\n";
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            cout << arr1[i] << ",";
        }
        else
        {
            cout << arr1[i] << "\n";
        }
    }

    cout << "Ԫ�����ú������Ϊ��\n";
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            cout << arr2[i] << ",";
        }
        else
        {
            cout << arr2[i] << "\n";
        }
    }

    system("pause");

    return 0;
}
