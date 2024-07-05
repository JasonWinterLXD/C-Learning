# include <iostream>
using namespace std;

// 常量的定义方式
// 1.#define 宏常量
// 2.const修饰的变量

// 1.#define 宏常量
#define Day 7

int main()
{
    // Day = 14; //错误，Day是常量
    cout << "一周共有" << Day << "天" << endl;

    // 2.const 修饰的变量
    const int month = 12;
    // month = 24;// 错误，const修饰的变量也是常量

    cout << "一年有" << month << "月" << endl;

    system("pause");

    return 0;
}