//
// Created by JasonL on 24-7-25.
//

#include <iostream>
using namespace std;

// 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

class Circle
{
public:
    void set_c(int c_x, int c_y, int c_r)
    {
        x = c_x;
        y = c_y;
        r = c_r;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

    int get_r()
    {
        return r;
    }

private:
    int x;
    int y;
    int r;
};

class Point
{
public:
    void set_p(int p_x, int p_y)
    {
        x = p_x;
        y = p_y;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

private:
    int x;
    int y;
};

void location(Circle& c, Point& p)
{
    int c_p, r2;
    c_p = (c.get_x() - p.get_x()) * (c.get_x() - p.get_x()) + (c.get_y() - p.get_y()) * (c.get_y() - p.get_y());
    r2 = c.get_r() * c.get_r();

    if (c_p > r2)
    {
        cout << "点在圆外\n";
    }
    else if (c_p < r2)
    {
        cout << "点在圆内\n";
    }
    else
    {
        cout << "点在圆上\n";
    }
}

int main()
{
    int c_x, c_y, c_r;
    int p_x, p_y;

    Circle c;
    Point p;

    cout << "请输入圆的坐标和半径：\n";
    cin >> c_x >> c_y >> c_r;
    cout << "圆的坐标为：(" << c_x << "," << c_y << ")，圆的半径为：" << c_r << "\n";
    c.set_c(c_x, c_y, c_r);

    cout << "请输入点的坐标：\n";
    cin >> p_x >> p_y;
    cout << "点的坐标为：(" << p_x << "," << p_y << ")" << "\n";
    p.set_p(p_x, p_y);

    location(c, p);

    system("pause");

    return 0;
}
