#include <iostream>
using namespace std;

/*
设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

五名英雄信息如下：

{"刘备",23,"男"},
{"关羽",22,"男"},
{"张飞",20,"男"},
{"赵云",21,"男"},
{"貂蝉",19,"女"},

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
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"}
    };

    int len = sizeof(h_arr) / sizeof(h_arr[0]);

    bubble(h_arr, len);

    paixu(h_arr, len);

    system("pause");

    return 0;
}
