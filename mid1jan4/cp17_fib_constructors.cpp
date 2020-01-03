#include<iostream>
using namespace std;
class fibonacci {
    private:
    int a, b, c;
    public:
        fibonacci(){
            a = 0;
            b = 1;
            c = a + b;
        }    
        void generate(){
            c = a + b;
            a = b;
            b = c;
        }
        void show(){
            cout << c << " ";
        }
};
int main(){
    int n;
    fibonacci f;
    cout << "Enter no. of terms: ";
    cin >> n;
    for(int i = 0 ; i< n;i++){
        f.show();
        f.generate();
    }
    cout << endl;
}