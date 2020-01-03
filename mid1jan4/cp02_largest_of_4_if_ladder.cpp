// largest of 4 numbers, nested if
#include<iostream>
using namespace std;
int main(){
    int a = 90, b = 30, c = 40, d = 50;
    if(a > b && a > c && a > d)
        cout << a << " is the largest number 1"<< endl;
    else if(b > a && b > c && b > d)
        cout << b << " is the largest number 1"<< endl;
    else if(c > a && c > b && c > d)
        cout << c << " is the largest number 1"<< endl;
    else 
        cout << d << " is the largest number 1"<< endl;
}