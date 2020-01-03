#include<iostream>
using namespace std;
long int fact(int n){
    if(n==1)
        return 1;
    else 
        return n * fact(n-1);
}
int main(){
    int n1;
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Factorial: " << fact(n1) << endl;
}