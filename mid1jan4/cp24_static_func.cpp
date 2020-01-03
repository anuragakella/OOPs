#include<iostream>
using namespace std;
class counter {
    public:
    static int count;
    counter(){
        count++;
    }
    static void output(){
        cout << count << endl;
    }
};
int counter::count;
int main(){
    cout << "Before: ";
    counter::output();
    counter c1, c2, c3, c4;
    cout << "After: ";
    counter::output();
}