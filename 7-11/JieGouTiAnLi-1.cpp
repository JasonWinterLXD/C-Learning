#include <iostream>
using namespace std;

/*
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա

ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
*/

struct Student
{
    string s_name;
    int score;
};

struct Teacher
{
    string t_name;
    Student s_arr[5];
};

void FuZhi(Teacher t_arr[], int t_len, int s_len)
{
    string tname = "��ʦ_";
    string sname = "ѧ��_";
    string name_seed = "ABCDE";

    for (int i = 0; i < t_len; i++)
    {
        t_arr[i].t_name = tname + name_seed[i];

        for (int j = 0; j < s_len; j++)
        {
            t_arr[i].s_arr[j].s_name = sname + name_seed[j];
            t_arr[i].s_arr[j].score = rand() % 61 + 40;
        }
    }
}

void DaYin(Teacher t_arr[], int t_len, int s_len)
{
    for (int i = 0; i < t_len; i++)
    {
        cout << "��ʦ������" << t_arr[i].t_name << endl;

        for (int j = 0; j < s_len; j++)
        {
            cout << "\tѧ��������" << t_arr[i].s_arr[j].s_name
                << "  ѧ��������" << t_arr[i].s_arr[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    Teacher t_arr[3];
    int t_len = sizeof(t_arr) / sizeof(t_arr[0]);
    int s_len = sizeof(t_arr[0].s_arr) / sizeof(t_arr[0].s_arr[0]);

    FuZhi(t_arr, t_len, s_len);

    DaYin(t_arr, t_len, s_len);

    system("pause");

    return 0;
}
