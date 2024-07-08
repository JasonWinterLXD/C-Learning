#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
    例如：1^3 + 5^3+ 3^3 = 153
    请利用do...while语句，求出所有3位数中的水仙花数
     */

    int i = 100;

    int ge_num = 0;
    int shi_num = 0;
    int bai_num = 0;
    int he = 0;

    do
    {
        bai_num = i / 100;
        shi_num = (i - bai_num * 100) / 10;
        ge_num = i - bai_num * 100 - shi_num * 10;

        he = pow(bai_num, 3) + pow(shi_num, 3) + pow(ge_num, 3);

        // cout << "i=" << i << endl;
        // cout << "bai_num=" << bai_num << endl;
        // cout << "shi_num=" << shi_num << endl;
        // cout << "ge_num=" << ge_num << endl;
        // cout << "he=" << he << endl;

        if (he == i)
        {
            cout << he << endl;
        }

        i++;
    }
    while (i < 1000);

    system("pause");

    return 0;
}
