#include <iostream>
using namespace std;

int main()
{
    // 系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。

    srand(time(0)); // 初始化随机数生成器
    int random_num = rand() % 100 + 1;
    int guess_num;

    cout << "猜数字\n";
    cin >> guess_num;

    while (guess_num != random_num)
    {
        cout << "猜错了！\n";
        if (guess_num < random_num)
        {
            cout << "数字过小\n";
        }
        else
        {
            cout << "数字过大\n";
        }

        cout << "重新输入\n";
        cin >> guess_num;
    }

    cout << "猜对了！\n";

    system("pause");

    return 0;
}
