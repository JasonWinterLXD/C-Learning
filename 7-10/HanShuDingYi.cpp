#include <iostream>
using namespace std;

int add (int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int a = 10, b = 10;

    int c = add(a, b);

    cout << "sum=" << c << endl;

    int a2 = 100, b2 = 100;

    int c2 = add(a2, b2);

    cout << "sum2=" << c2 << endl;

    system("pause");

    return 0;
}