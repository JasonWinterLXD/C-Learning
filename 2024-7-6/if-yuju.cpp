#include <iostream>
using namespace std;

int main()
{

    // ��ʾ�û�����һ���߿����Է��������ݷ����������ж�
    // �����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ��ƣ�
    // ��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�

    int score = 0;
    cout << "���������ķ�����\n";
    cin >> score;
    cout << "���ķ����ǣ�" << score << endl;

    if(score>600)
    {
        if(score>700)
        {
            cout << "�������˱���\n";
        }
        else if(score>650&&score<=700)
        {
            cout << "���������廪��\n";
        }
        else if(score<=650)
        {
            cout << "���������˴�\n";
        }
        else
        {
            cout << "��������һ����\n";
        }
    }
    else if(score>500&&score<=600)
    {
        cout << "�������˶�����\n";
    }
    else if(score>400&&score<=500)
    {
        cout << "��������������\n";
    }
    else
    {
        cout << "��δ���ϴ�ѧ\n";
    }

    system("pause");

    return 0;
}