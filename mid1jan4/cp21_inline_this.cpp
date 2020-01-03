#include<iostream>
using namespace std;
class point {
    private:
    int x, y;
    public:
    point(){
        x = 0;
        y = 0;
    }
    point(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    inline void show(){
        cout << x << ", " << y << endl;
    }
};
int main(){
    point p(0, 1);
    p.show();
}