#include <iostream>
using namespace std;

int main()
{
    //�����Ӱ����
    //10 ~ 9   ����
    // 8 ~ 7   �ǳ���
    // 6 ~ 5   һ��
    // 5������ ��Ƭ

    cout << "�����Ӱ����\n";

    int f = 0;
    cin >> f;

    switch (f)
    {
    case 10:
    case 9:
        cout << "����\n";
        break;
    case 8:
    case 7:
        cout << "�ǳ���\n";
        break;
    case 6:
    case 5:
        cout << "һ��\n";
        break;
    case 4:
    case 3:
    case 2:
    case 1:
        cout << "��Ƭ\n";
        break;
    default:
        cout << "������1~10\n";
        break;
    }
    
    system("pause");

    return 0;
}