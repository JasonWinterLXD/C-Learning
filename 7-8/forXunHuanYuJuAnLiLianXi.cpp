#include <iostream>
using namespace std;

int main()
{
    //��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����

    for (int i = 1; i <= 100; i++)
    {
        int ge_num = i % 10;
        int shi_num = i / 10;
        int bei_num = i % 7;

        // cout << "i=" << i << endl;
        // cout << "ge_num=" << ge_num << endl << "shi_num=" << shi_num << endl << "bei_num=" << bei_num << endl;

        if (ge_num == 7 || shi_num == 7 || bei_num == 0)
        {
            cout << "������" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    system("pause");

    return 0;
}
