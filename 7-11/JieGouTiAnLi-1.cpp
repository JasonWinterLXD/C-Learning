#include <iostream>
using namespace std;

/*
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
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
    string tname = "教师_";
    string sname = "学生_";
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
        cout << "教师姓名：" << t_arr[i].t_name << endl;

        for (int j = 0; j < s_len; j++)
        {
            cout << "\t学生姓名：" << t_arr[i].s_arr[j].s_name
                << "  学生分数：" << t_arr[i].s_arr[j].score << endl;
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
