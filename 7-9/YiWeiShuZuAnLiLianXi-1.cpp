#include <iostream>
using namespace std;

int main()
{
    /*
    在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
    找出并打印最重的小猪体重。
     */

    int pig_weight[5] = {300, 350, 600, 400, 250};
    int weightest = 0;

    for (int i = 0; i < 5; i++)
    {
        if (pig_weight[i] >= weightest)
        {
            weightest = pig_weight[i];
        }
    }

    cout << "最重为：" << weightest << endl;

    system("pause");

    return 0;
}
