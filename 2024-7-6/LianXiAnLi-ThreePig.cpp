#include <iostream>
using namespace std;

int main()
{
    // ����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�

    int A = 0, B = 0, C = 0;
    cout << "������AС�������:";
    cin >> A;
    cout << "������BС�������:";
    cin >> B;
    cout << "������CС�������:";
    cin >> C;

    if (A > B)
    {
        if (A > C)
        {
            cout << "A���أ�\n";
        }
        else if (A < C)
        {
            cout << "C���أ�\n";
        }
        else
        {
            cout << "A��C���أ�\n";
        }
    }
    else if (B > A)
    {
        if (B > C)
        {
            cout << "B���أ�\n";
        }
        else if (B < C)
        {
            cout << "C���أ�\n";
        }
        else
        {
            cout << "B��C���أ�\n";
        }
    }
    else if (B == A)
    {
        if (B > C)
        {
            cout << "A��B���أ�\n";
        }
        else if (B < C)
        {
            cout << "C���أ�\n";
        }
        else
        {
            cout << "ABCһ���أ�\n";
        }
    }


    system("pause");

    return 0;
}
