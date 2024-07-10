#include <iostream>
using namespace std;

int main() {

    /*
    有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，**请分别输出三名同学的总成绩**

    |      | 语文 | 数学 | 英语 |
    | ---- | ---- | ---- | ---- |
    | 张三 | 100  | 100  | 100  |
    | 李四 | 90   | 50   | 100  |
    | 王五 | 60   | 70   | 80   |
 */

    int score[3][3] = { {100,100,100}, {90,50,100}, {60,70,80} };
    int score_zhang = 0, score_li = 0, score_wang = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << score[i][j] <<" ";

            switch (i)
            {
            case 0:
                score_zhang += score[i][j];
                break;
            case 1:
                score_li += score[i][j];
                break;
            case 2:
                score_wang += score[i][j];
                break;
            }
        }
    }

    cout << "张三总成绩为：" << score_zhang << endl;
    cout << "李四总成绩为：" << score_li << endl;
    cout << "王五总成绩为：" << score_wang << endl;
    cout << "\n";

    system("pause");

    return 0;
}