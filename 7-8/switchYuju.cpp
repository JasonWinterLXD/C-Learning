#include <iostream>
using namespace std;

int main()
{
    //请给电影评分
    //10 ~ 9   经典
    // 8 ~ 7   非常好
    // 6 ~ 5   一般
    // 5分以下 烂片

    cout << "请给电影评分\n";

    int f = 0;
    cin >> f;

    switch (f)
    {
    case 10:
    case 9:
        cout << "经典\n";
        break;
    case 8:
    case 7:
        cout << "非常好\n";
        break;
    case 6:
    case 5:
        cout << "一般\n";
        break;
    case 4:
    case 3:
    case 2:
    case 1:
        cout << "烂片\n";
        break;
    default:
        cout << "请输入1~10\n";
        break;
    }
    
    system("pause");

    return 0;
}