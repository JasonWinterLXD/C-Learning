#include <iostream>
using namespace std;

int main()
{
    // ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��

    srand(time(0)); // ��ʼ�������������
    int random_num = rand() % 100 + 1;
    int guess_num;

    cout << "������\n";
    cin >> guess_num;

    while (guess_num != random_num)
    {
        cout << "�´��ˣ�\n";
        if (guess_num < random_num)
        {
            cout << "���ֹ�С\n";
        }
        else
        {
            cout << "���ֹ���\n";
        }

        cout << "��������\n";
        cin >> guess_num;
    }

    cout << "�¶��ˣ�\n";

    system("pause");

    return 0;
}
