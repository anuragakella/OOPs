#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    long int fact = 1;
    cout << "Enter an number: ";
    cin >> n;
    cout << "Factorial: " << endl;
    cout << "For Loop: ";
    for(i=1;i<=n;i++)
        fact *= i;
    cout << fact << endl;
    fact = 1;
    cout << "While Loop: ";
    i = 0;
    while(++i<=n)
        fact *= i;
    cout << fact << endl;
}