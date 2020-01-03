#include <iostream>
using namespace std;
class complex {
    private:
    int real, imag;
    public:
    complex(int r, int i){
        real = r;
        imag = i;
    }
    complex(){
        real = 0; 
        imag = 0;
    }
    complex operator+(complex c){
        complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
    void disp(){
        cout << real << " + " << imag  << "i" << endl;
    }
};
int main(){
    complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c1.disp();
    c2.disp();
    cout << "ADD: " << endl;
    c3.disp();
}
