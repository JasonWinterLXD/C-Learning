#include <iostream>
using namespace std;

int main() {

    /*
    ������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±�**��ֱ��������ͬѧ���ܳɼ�**

    |      | ���� | ��ѧ | Ӣ�� |
    | ---- | ---- | ---- | ---- |
    | ���� | 100  | 100  | 100  |
    | ���� | 90   | 50   | 100  |
    | ���� | 60   | 70   | 80   |
 */

    int score[3][3] = { {100,100,100}, {90,50,100}, {60,70,80} };
    int score_zhang = 0, score_li = 0, score_wang = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << score[i][j] <<" ";

            switch (i)
            {
            case 0:
                score_zhang += score[i][j];
                break;
            case 1:
                score_li += score[i][j];
                break;
            case 2:
                score_wang += score[i][j];
                break;
            }
        }
    }

    cout << "�����ܳɼ�Ϊ��" << score_zhang << endl;
    cout << "�����ܳɼ�Ϊ��" << score_li << endl;
    cout << "�����ܳɼ�Ϊ��" << score_wang << endl;
    cout << "\n";

    system("pause");

    return 0;
}