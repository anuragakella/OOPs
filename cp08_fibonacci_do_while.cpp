#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 1, c = a + b, n, i = 0;
    cout << "Number of terms: ";
    cin >> n;
    do{
        cout << c << " ";
        c = a+b;
        a = b;
        b = c;
        i++;
    }while(i < n);
    cout << endl;
}
