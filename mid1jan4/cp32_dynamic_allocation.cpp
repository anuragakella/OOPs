#include<iostream>
using namespace std;
int main(){
    int *arr = new int[3]();
    int *arrsum = new int();
    fill_n(arr, 3, 8);
    cout << "first arr index: ";
    cout << arr[0] << endl;
    for(int i = 0; i< 3;i++)
        *arrsum += arr[i];
    cout << "Sum: "<< *arrsum << endl;
}