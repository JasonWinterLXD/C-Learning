#include <iostream>
using namespace std;

int main()
{
    // 有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？

    int A = 0, B = 0, C = 0;
    cout << "请输入A小猪的重量:";
    cin >> A;
    cout << "请输入B小猪的重量:";
    cin >> B;
    cout << "请输入C小猪的重量:";
    cin >> C;

    if (A > B)
    {
        if (A > C)
        {
            cout << "A最重！\n";
        }
        else if (A < C)
        {
            cout << "C最重！\n";
        }
        else
        {
            cout << "A和C最重！\n";
        }
    }
    else if (B > A)
    {
        if (B > C)
        {
            cout << "B最重！\n";
        }
        else if (B < C)
        {
            cout << "C最重！\n";
        }
        else
        {
            cout << "B和C最重！\n";
        }
    }
    else if (B == A)
    {
        if (B > C)
        {
            cout << "A和B最重！\n";
        }
        else if (B < C)
        {
            cout << "C最重！\n";
        }
        else
        {
            cout << "ABC一样重！\n";
        }
    }


    system("pause");

    return 0;
}
