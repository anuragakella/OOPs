#include<iostream>
using namespace std;
class A {
    private:
        int a1, a2;
    public:
    A(){
        a1 = 90;
        a2 = 90;
    }
        friend class B;
};
class B {
    private:
        int b1, b2;
    public:
    void show(){
            A a;
            cout << a.a1 << " " << a.a2;
        }
};
class C {
    private:
        int c1, c2;
    public:
    C(){
        c1 = 10;
    }
        friend int getN(C c);
};
int getN(C c){
    return c.c1;
}
int main(){
    A a;
    B b;
    C c;
    cout << "Private friend Class: ";
    b.show();
    cout << endl;
    cout << "Friend Function: ";
    cout << getN(c) << endl;
}