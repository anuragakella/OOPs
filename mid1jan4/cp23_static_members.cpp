#include<iostream>
using namespace std;
class counter {
    public:
    static int count;
    counter(){
        count++;
    }
};
int counter::count;
int main(){
    counter c1, c2, c3, c4;
    cout << "Obj 4: " << c4.count;
    cout << endl;
}