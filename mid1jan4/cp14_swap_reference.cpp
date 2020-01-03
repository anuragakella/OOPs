#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a1 = 10, b1 = 20;
    cout << "Before Swapping: " << a1 << " " << b1 << endl;
    swap(&a1, &b1);
    cout << "After Swap(call by value): ";
    cout << a1 << " " << b1 << endl;
}
