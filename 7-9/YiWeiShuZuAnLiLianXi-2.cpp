#include <iostream>
using namespace std;

int main()
{
    /*
    请声明一个5个元素的数组，并且将元素逆置.
    (如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
     */

    int arr1[5] = {1, 3, 2, 5, 4};
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[4-i] = arr1[i];
    }

    cout << "原数组为：\n";
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

    cout << "元素逆置后的数组为：\n";
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
