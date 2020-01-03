#include<iostream>
using namespace std;
int main(){
    int a[10][10], b[10][10], c[10][10], m, n,p, q;
    cout << "Enter order of the matrix A: ";
    cin >> m >> n;
    cout << "Matrix A: ";
    for(int i = 0 ; i<m;i++) for(int j = 0; j<n;j++) cin >> a[i][j];
    cout << "Enter order of the matrix B: ";
    cin >> p >> q;
    cout << "Matrix B: ";
    for(int i = 0 ; i<p;i++) 
        for(int j = 0; j<q;j++)
            cin >> b[i][j]; 
    for(int i = 0 ; i<m;i++) 
        for(int j = 0; j<q;j++)
        c[i][j] = 0;
    for(int i = 0 ; i<m;i++){
        for(int j = 0; j<q;j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0 ; i<m;i++){
        for(int j = 0; j<q;j++)
            cout << c[i][j] <<" ";
            cout << endl;
    }
        
}