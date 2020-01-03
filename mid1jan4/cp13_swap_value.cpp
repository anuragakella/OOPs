#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap(call by value): ";
    cout << a << " " << b << endl;
}
int main(){
    int a1 = 10, b1 = 20;
    cout << "Before Swapping: " << a1 << " " << b1 << endl;
    swap(a1, b1);
}
