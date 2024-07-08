#include <iostream>
using namespace std;

int main()
{
    //从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。

    for (int i = 1; i <= 100; i++)
    {
        int ge_num = i % 10;
        int shi_num = i / 10;
        int bei_num = i % 7;

        // cout << "i=" << i << endl;
        // cout << "ge_num=" << ge_num << endl << "shi_num=" << shi_num << endl << "bei_num=" << bei_num << endl;

        if (ge_num == 7 || shi_num == 7 || bei_num == 0)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    system("pause");

    return 0;
}
