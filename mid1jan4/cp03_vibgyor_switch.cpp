// largest of 4 numbers, nested if
#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter a lowercase character: ";
    cin >> c;
    switch (c)
    {
    case 'v':
        cout << "Violet" << endl;
        break;
    case 'i':
        cout << "Indigo" << endl;
        break;
    case 'b':
        cout << "BLue" << endl;
        break;
    case 'g':
        cout << "Green" << endl;
        break;
    case 'y':
        cout << "Yellow" << endl;
        break;
    case 'o':
        cout << "Orange" << endl;
        break;
    case 'r':
        cout << "Red" << endl;
        break;
    default:
        cout << "Bad Input." << endl;
        break;
    }
}