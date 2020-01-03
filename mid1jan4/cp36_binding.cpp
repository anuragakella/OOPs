#include <iostream>
using namespace std;

// REMOVE VIRTUAL FOR EARLY BINDING, KEEP IT FOR LATE BINDING.

class class1{
    public:
        virtual void output(){
            cout << 1 << endl;
        }
};

class derived2 : public class1{
    int x;

    public:
        virtual void output()
        {
            cout << 2 <<endl;
        }
};

class derived3 : public derived2{
    public:
        virtual void output()
        {
            cout << 3 << endl;
        }
};
int main()
{
    class1 b1;
    derived2 d1;
    derived3 d2;
    class1 *ptr[3];
    ptr[0] = &b1;
    ptr[1] = &d1;
    ptr[2] = &d2;
    for (int i = 0; i < 3; i++)
    {
        ptr[i]->output();
    }
}
