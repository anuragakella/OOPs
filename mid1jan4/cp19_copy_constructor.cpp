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
        fibonacci(fibonacci &f){
            a = f.a;
            b = f.b;
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
    f.generate();
    fibonacci f2(f);
    cout << "Enter no. of terms: ";
    cin >> n;
    for(int i = 0 ; i< n;i++){
        f2.show();
        f2.generate();
    }
    cout << endl;
}