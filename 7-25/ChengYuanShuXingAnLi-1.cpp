//
// Created by JasonL on 24-7-25.
//

#include <iostream>
using namespace std;

/*
设计立方体类(Cube)
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。
 */

class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public:
    //设置长
    void setL(int l)
    {
        m_L = l;
    }

    //获取长
    int getL()
    {
        return m_L;
    }

    //设置宽
    void setW(int w)
    {
        m_W = w;
    }

    //获取宽
    int getW()
    {
        return m_W;
    }

    //设置高
    void setH(int h)
    {
        m_H = h;
    }

    //获取高
    int getH()
    {
        return m_H;
    }

    int S()
    {
        int s = m_L * m_H * 2 + m_L * m_W * 2 + m_W * m_H * 2;
        return s;
    }

    int V()
    {
        int v = m_L * m_W * m_H;
        return v;
    }

    bool memberequal(Cube &c2)
    {
    if (getL() == c2.getL() && getW() == c2.getW() && getH() == c2.getH())
    {
        return true;
    }
    return false;
    }
};

//全局函数
bool globalequal(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    cout << "面积为：" << c1.S() << "\n";
    cout << "体积为：" << c1.V() << "\n";

    if (globalequal(c1, c2))
    {
        cout << "全局函数的c1,c2相同\n";
    }
    if (c1.memberequal(c2))
    {
        cout << "成员函数的c1,c2相同\n";
    }
}
