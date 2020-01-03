#include<iostream>
using namespace std;
int fact(int n){
    int facto = 1;
    for(int i = 1; i <= n;i++)
        facto *= i;
    return facto;
}
int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r)); 
}
int main(){
    int r;
    cout << "Enter the no. of rows: ";
    cin >> r;
    for (int i = 0; i < r; i++){
        for (int k = (r-i); k >= 0; k--) cout << "  ";
        for (int k = 0; k <= i; k++){
            cout << nCr(i, k) << "   ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}