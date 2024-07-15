# include <iostream>
using namespace std;

/*
* �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
* ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
* ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
* ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
* �޸���ϵ�ˣ��������������޸�ָ����ϵ��
* �����ϵ�ˣ����ͨѶ¼��������Ϣ
* �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
*/

const int max_per = 10;

// ͨѶ¼�ṹ��
struct Contact
{
    string name;
    string sex;
    int age;
    string phone;
    string address;
};

// 1�������ϵ��
int addper(Contact person[], int size)
{
    if (size <= max_per)
    {
        int sex_num = 0;
        cout << "������\n";
        cin >> person[size].name;
        while (sex_num == 0)
        {
            cout << "�Ա�\n1--��\n2--Ů\n";
            cin >> sex_num;
            switch (sex_num)
            {
            case 1:
                person[size].sex = "��";
                break;
            case 2:
                person[size].sex = "Ů";
                break;
            default:
                sex_num = 0;
                cout << "�������룬����������!\n";
                break;
            }
        }
        cout << "���䣺\n";
        cin >> person[size].age;
        cout << "��ϵ�绰��\n";
        cin >> person[size].phone;
        cout << "��ַ��\n";
        cin >> person[size].address;
        size++;
        cout << "��ϵ����ӳɹ���\n";
    }
    else
    {
        cout << "��ϵ���������޷���ӣ�\n";
    }

    return size;
}
// 2����ʾ��ϵ��
void showper(Contact person[], int size)
{
    if (size != 0)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "������" << person[i].name << "\t�Ա�" << person[i].sex << "\t���䣺" << person[i].age
                 << "\t�绰��" << person[i].phone << "\t��ͥסַ��" << person[i].address << endl;
        }
    }
    else
    {
        cout << "ͨѶ¼��������ϵ�ˣ�\n";
    }
}

// 3��ɾ����ϵ��
int delper (Contact person[], int size)
{
    string name;

    if (size != 0)
    {
        cout << "������Ҫɾ������ϵ��������\n";
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
        cout << "ɾ����ϵ�˳ɹ���\n";
    }
    else
    {
        cout << "ͨѶ¼��������ϵ�ˣ�\n";
    }

    return size;
}

// 4��������ϵ��
void selectper(Contact person[], int size)
{
    string name;

    if (size != 0)
    {
        cout << "��������ҵ���ϵ��������\n";
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (person[i].name == name)
            {
                cout << "������" << person[i].name << "\t�Ա�" << person[i].sex << "\t���䣺" << person[i].age
                 << "\t�绰��" << person[i].phone << "\t��ͥסַ��" << person[i].address << endl;
                return;
            }
        }
        cout << "δ���ҵ�����ϵ�ˣ�\n";
    }
    else
    {
        cout << "ͨѶ¼��������ϵ�ˣ�\n";
    }
}

// 5���޸���ϵ��
void modper (Contact person[], int size)
{
    string name;
    int sex_num = 0;

    if (size != 0)
    {
        cout << "������Ҫ�޸ĵ���ϵ��������\n";
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (person[i].name == name)
            {
                cout << "����������\n";
                cin >> person[i].name;
                while (sex_num == 0)
                {
                    cout << "�����Ա�\n1--��\n2--Ů\n";
                    cin >> sex_num;
                    switch (sex_num)
                    {
                    case 1:
                        person[i].sex = "��";
                        break;
                    case 2:
                        person[i].sex = "Ů";
                        break;
                    default:
                        sex_num = 0;
                        cout << "�������룬����������!\n";
                        break;
                    }
                }
                cout << "�������䣺\n";
                cin >> person[i].age;
                cout << "������ϵ�绰��\n";
                cin >> person[i].phone;
                cout << "���µ�ַ��\n";
                cin >> person[i].address;

                cout << "�޸���ϵ�˳ɹ���\n";
                return;
            }
            cout << "δ�ҵ�����ϵ�ˣ�\n";
        }
    }
    else
    {
        cout << "ͨѶ¼��������ϵ�ˣ�\n";
    }
}

// 6�������ϵ��
int cleper (int size)
{
    int num = 0;

    cout << "ͨѶ¼����" << size << "�ˣ�ȷ��Ҫ���ͨѶ¼��\n";
    cout << "1--��";
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

// 0���˳�ͨѶ¼

// չʾ�����˵�
void menu()
{
    cout << "*********************************" << endl;
    cout << "**   ***** 1. �����ϵ�� *****   **" << endl;
    cout << "**   ***** 2. ��ʾ��ϵ�� *****   **" << endl;
    cout << "**   ***** 3. ɾ����ϵ�� *****   **" << endl;
    cout << "**   ***** 4. ������ϵ�� *****   **" << endl;
    cout << "**   ***** 5. �޸���ϵ�� *****   **" << endl;
    cout << "**   ***** 6. �����ϵ�� *****   **" << endl;
    cout << "**   ***** 0. �˳�ͨѶ¼ *****   **" << endl;
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

        cout << "������Ҫִ�еĲ�����\n";
        cin >> action;

        switch (action)
        {
        case 1:// 1�������ϵ��
            size = addper(person, size);
            break;
        case 2:// 2����ʾ��ϵ��
            showper(person, size);
            break;
        case 3:// 3��ɾ����ϵ��
            size = delper(person, size);
            // cout << size <<endl;
            break;
        case 4:// 4��������ϵ��
            selectper(person, size);
            break;
        case 5:// 5���޸���ϵ��
            modper(person, size);
            break;
        case 6:// 6�������ϵ��
            size = cleper(size);
            cout << size <<endl;
            break;
        case 0:// 0���˳�ͨѶ¼
            cout << "�����˳�...\n";
            return 0;
        default:// ��������
            cout << "�������룬�����ԣ�\n";
            break;
        }

        // system("pause");
        //
        // system("cls");
    }

    system("pause");

    return 0;
}