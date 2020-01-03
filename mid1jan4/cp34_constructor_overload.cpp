#include<iostream>
using namespace std;
class CartesianPoint{
    private:
    int x, y;
    public:
    CartesianPoint(){
        x = 0;
        y = 0;
    }
    CartesianPoint(CartesianPoint &pt){
        x = pt.x;
        y = pt.y;
    }
    CartesianPoint(int ex, int why){
        x = ex;
        y = why;
    }
    void show(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main(){
    CartesianPoint p0, p1(4, 5), p2(6, 9), p3(p2);
    p0.show();
    p1.show();
    p3.show();
}