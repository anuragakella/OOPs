// largest of 4 numbers, nested if
#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 30, c = 40, d = 50;
    if(a > b)
        if(a > c)
            if(a > d)
                cout << a << " is the largest number"<< endl;
            else 
                cout << d << " is the largest number"<< endl;
        else 
            if(c > d)
                cout << c << " is the largest number"<< endl;
            else
                cout << d << " is the largest number"<< endl;
    else 
        if(b > c)
            if(b > d)
                cout << b << " is the largest number"<< endl;
            else 
                cout << d << " is the largest number"<< endl;
        else 
            if(c > d)
                cout << c << " is the largest number"<< endl;
            else
                cout << d << " is the largest number"<< endl;
}