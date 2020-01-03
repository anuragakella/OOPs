#include <iostream>
using namespace std;

class A
{
    int x;
    char y;

public:
    void output()
    {
        cout << x << " " << y << endl;
    }
    A(int a, char b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    A a1(13, 'p');
    A a2(24, 'l');
    a2 = a1;
    a1.output();
    a2.output();
}
