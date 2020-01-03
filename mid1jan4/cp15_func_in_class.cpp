#include<iostream>
using namespace std;
class si {
    private:
        int p, n, r;
        float si;
    public:
        void calc_si(){
            cout << "Enter P, N, R: ";
            cin >> p >> n >> r;
            si = (p*n*r)/(float)100;
            cout << "SI: " << si;
        }
};
int main(){
    si s;
    s.calc_si();
}