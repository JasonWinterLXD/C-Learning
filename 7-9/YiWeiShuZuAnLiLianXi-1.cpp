#include <iostream>
using namespace std;

int main()
{
    /*
    ��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
    �ҳ�����ӡ���ص�С�����ء�
     */

    int pig_weight[5] = {300, 350, 600, 400, 250};
    int weightest = 0;

    for (int i = 0; i < 5; i++)
    {
        if (pig_weight[i] >= weightest)
        {
            weightest = pig_weight[i];
        }
    }

    cout << "����Ϊ��" << weightest << endl;

    system("pause");

    return 0;
}
