#include<iostream>
using namespace std;
class cmp {
    private:
    int x, y;
    public:
    cmp(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    cmp(){
        x = 0;
        y = 0;
    }
    int operator<(cmp c){
        if(x > c.x)
            return 1;
        else
            return 0;
    }
    int operator>(cmp c){
        if(x > c.x)
            return 0;
        else
            return 1;
    }
};
int main(){
    cmp c1(9, 0), c2(10, 8);
    cout << (c2 < c1) << endl;
    cout << (c2 > c1) << endl;
}