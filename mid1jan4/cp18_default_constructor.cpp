#include<iostream>
using namespace std;
class employee {
    private:
    int eid, salary;
    public:
    employee(){
        eid = 0;
        salary = 0;
    }
    void show(){
        cout << eid << " " << salary << endl;
    }
};
int main(){
    employee e1;
    e1.show();
}