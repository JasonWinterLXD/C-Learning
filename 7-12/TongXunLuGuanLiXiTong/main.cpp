# include <iostream>
using namespace std;

/*
* 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
* 显示联系人：显示通讯录中所有联系人信息
* 删除联系人：按照姓名进行删除指定联系人
* 查找联系人：按照姓名查看指定联系人信息
* 修改联系人：按照姓名重新修改指定联系人
* 清空联系人：清空通讯录中所有信息
* 退出通讯录：退出当前使用的通讯录
*/

const int max_per = 10;

// 通讯录结构体
struct Contact
{
    string name;
    string sex;
    int age;
    string phone;
    string address;
};

// 1、添加联系人
int addper(Contact person[], int size)
{
    if (size <= max_per)
    {
        int sex_num = 0;
        cout << "姓名：\n";
        cin >> person[size].name;
        while (sex_num == 0)
        {
            cout << "性别：\n1--男\n2--女\n";
            cin >> sex_num;
            switch (sex_num)
            {
            case 1:
                person[size].sex = "男";
                break;
            case 2:
                person[size].sex = "女";
                break;
            default:
                sex_num = 0;
                cout << "错误输入，请重新输入!\n";
                break;
            }
        }
        cout << "年龄：\n";
        cin >> person[size].age;
        cout << "联系电话：\n";
        cin >> person[size].phone;
        cout << "地址：\n";
        cin >> person[size].address;
        size++;
        cout << "联系人添加成功！\n";
    }
    else
    {
        cout << "联系人已满，无法添加！\n";
    }

    return size;
}
// 2、显示联系人
void showper(Contact person[], int size)
{
    if (size != 0)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "姓名：" << person[i].name << "\t性别：" << person[i].sex << "\t年龄：" << person[i].age
                 << "\t电话：" << person[i].phone << "\t家庭住址：" << person[i].address << endl;
        }
    }
    else
    {
        cout << "通讯录中暂无联系人！\n";
    }
}

// 3、删除联系人
int delper (Contact person[], int size)
{
    string name;

    if (size != 0)
    {
        cout << "请输入要删除的联系人姓名：\n";
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (person[i].name == name)
            {
                for (int j = i; j < size; j++)
                {
                    person[j] = person[j+1];
                }
            }
        }
        size--;
        cout << "删除联系人成功！\n";
    }
    else
    {
        cout << "通讯录中暂无联系人！\n";
    }

    return size;
}

// 4、查找联系人
void selectper(Contact person[], int size)
{
    string name;

    if (size != 0)
    {
        cout << "请输入查找的联系人姓名：\n";
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (person[i].name == name)
            {
                cout << "姓名：" << person[i].name << "\t性别：" << person[i].sex << "\t年龄：" << person[i].age
                 << "\t电话：" << person[i].phone << "\t家庭住址：" << person[i].address << endl;
                return;
            }
        }
        cout << "未查找到该联系人！\n";
    }
    else
    {
        cout << "通讯录中暂无联系人！\n";
    }
}

// 5、修改联系人
void modper (Contact person[], int size)
{
    string name;
    int sex_num = 0;

    if (size != 0)
    {
        cout << "请输入要修改的联系人姓名：\n";
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (person[i].name == name)
            {
                cout << "更新姓名：\n";
                cin >> person[i].name;
                while (sex_num == 0)
                {
                    cout << "更新性别：\n1--男\n2--女\n";
                    cin >> sex_num;
                    switch (sex_num)
                    {
                    case 1:
                        person[i].sex = "男";
                        break;
                    case 2:
                        person[i].sex = "女";
                        break;
                    default:
                        sex_num = 0;
                        cout << "错误输入，请重新输入!\n";
                        break;
                    }
                }
                cout << "更新年龄：\n";
                cin >> person[i].age;
                cout << "更新联系电话：\n";
                cin >> person[i].phone;
                cout << "更新地址：\n";
                cin >> person[i].address;

                cout << "修改联系人成功！\n";
                return;
            }
            cout << "未找到该联系人！\n";
        }
    }
    else
    {
        cout << "通讯录中暂无联系人！\n";
    }
}

// 6、清空联系人
int cleper (int size)
{
    int num = 0;

    cout << "通讯录中有" << size << "人，确定要清空通讯录？\n";
    cout << "1--是";
    cin >> num;

    switch (num)
    {
    case 1:
        size = 0;
        break;
    case 2:
    default:
        break;
    }


    return size;
}

// 0、退出通讯录

// 展示操作菜单
void menu()
{
    cout << "*********************************" << endl;
    cout << "**   ***** 1. 添加联系人 *****   **" << endl;
    cout << "**   ***** 2. 显示联系人 *****   **" << endl;
    cout << "**   ***** 3. 删除联系人 *****   **" << endl;
    cout << "**   ***** 4. 查找联系人 *****   **" << endl;
    cout << "**   ***** 5. 修改联系人 *****   **" << endl;
    cout << "**   ***** 6. 清空联系人 *****   **" << endl;
    cout << "**   ***** 0. 退出通讯录 *****   **" << endl;
    cout << "*********************************" << endl;
}

int main()
{
    Contact person[max_per];

    int size = 0;
    int action = 0;

    while (true)
    {
        menu();

        cout << "请输入要执行的操作：\n";
        cin >> action;

        switch (action)
        {
        case 1:// 1、添加联系人
            size = addper(person, size);
            break;
        case 2:// 2、显示联系人
            showper(person, size);
            break;
        case 3:// 3、删除联系人
            size = delper(person, size);
            // cout << size <<endl;
            break;
        case 4:// 4、查找联系人
            selectper(person, size);
            break;
        case 5:// 5、修改联系人
            modper(person, size);
            break;
        case 6:// 6、清空联系人
            size = cleper(size);
            cout << size <<endl;
            break;
        case 0:// 0、退出通讯录
            cout << "正在退出...\n";
            return 0;
        default:// 错误输入
            cout << "错误输入，请重试！\n";
            break;
        }

        // system("pause");
        //
        // system("cls");
    }

    system("pause");

    return 0;
}