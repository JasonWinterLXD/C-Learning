#include <iostream>
using namespace std;

int main()
{

    // 提示用户输入一个高考考试分数，根据分数做如下判断
    // 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
    // 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。

    int score = 0;
    cout << "请输入您的分数：\n";
    cin >> score;
    cout << "您的分数是：" << score << endl;

    if(score>600)
    {
        if(score>700)
        {
            cout << "您考上了北大！\n";
        }
        else if(score>650&&score<=700)
        {
            cout << "您考上了清华！\n";
        }
        else if(score<=650)
        {
            cout << "您考上了人大！\n";
        }
        else
        {
            cout << "您考上了一本！\n";
        }
    }
    else if(score>500&&score<=600)
    {
        cout << "您考上了二本！\n";
    }
    else if(score>400&&score<=500)
    {
        cout << "您考上了三本！\n";
    }
    else
    {
        cout << "您未考上大学\n";
    }

    system("pause");

    return 0;
}