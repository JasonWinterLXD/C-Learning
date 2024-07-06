#include <iostream>
using namespace std;

int main()
{
    // 1.整型
    int a = 0;
    cout << "请输入整型变量a：\n";
    cin >> a;
    cout << "整型变量a=" << a << endl;

    // 2.浮点型
    float f = 0;
    cout << "请输入浮点型变量f：\n";
    cin >> f;
    cout << "浮点型变量f=" << f << endl;

    // 3.字符型
    char ch = a;
    cout << "请输入字符型变量ch：\n";
    cin >> ch;
    cout << "字符型变量ch=" << ch << endl;

    // 4.字符串型
    string str = "0";
    cout << "请输入字符串型变量str：\n";
    cin >> str;
    cout << "字符串型变量str=" << str << endl;

    // 5.布尔型
    bool b = false;
    cout << "请输入布尔型变量b：\n";
    cin >> b;
    cout << "布尔型变量b=" << b << endl;


    system("pause");


    return 0;
}