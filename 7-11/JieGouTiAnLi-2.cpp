#include <iostream>
using namespace std;

/*
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

����Ӣ����Ϣ���£�

{"����",23,"��"},
{"����",22,"��"},
{"�ŷ�",20,"��"},
{"����",21,"��"},
{"����",19,"Ů"},

*/
struct Hero
{
    string name;
    int age;
    string sex;
};

void bubble (Hero h_arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (h_arr[j].age > h_arr[j+1].age)
            {
                Hero temp = h_arr[j];
                h_arr[j] = h_arr[j+1];
                h_arr[j+1] = temp;

            }
        }
    }
}

void paixu (Hero h_arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << h_arr[i].name << "  " << h_arr[i].age << "  " << h_arr[i].sex << endl;
    }
}

int main()
{
    Hero h_arr[5] = {
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 21, "��"},
        {"����", 19, "Ů"}
    };

    int len = sizeof(h_arr) / sizeof(h_arr[0]);

    bubble(h_arr, len);

    paixu(h_arr, len);

    system("pause");

    return 0;
}
