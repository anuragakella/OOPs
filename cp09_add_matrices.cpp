#include<iostream>
using namespace std;
int main(){
    int a[10][10], b[10][10], c[10][10], m, n;
    cout << "Enter order of the matrix: ";
    cin >> m >> n;
    cout << "Matrix A: ";
    for(int i = 0 ; i<m;i++) for(int j = 0; j<n;j++) cin >> a[i][j];
    cout << "Matrix B: ";
    for(int i = 0 ; i<m;i++) 
        for(int j = 0; j<n;j++) {
        cin >> b[i][j]; 
        c[i][j] = a[i][j] + b[i][j];
    }
    cout << "Addition: " << endl;
    for(int i = 0 ; i<m;i++){ 
        for(int j = 0; j<n;j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}