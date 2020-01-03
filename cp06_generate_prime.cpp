#include<iostream>
using namespace std;
int isPrime(int n){
    int y = 0;
    for(int i = 2; i < n; i++)
        if(n % i == 0){
            y = 1;
            break;
        }
    if(y == 0)
        return 1;
    else 
        return 0;
}
int main() {
    int n, i = 2;
    cout << "Enter an endpoint: ";
    cin >> n;
    cout << "Prime Numbers: " << endl;
    while(i <= n){
        if(isPrime(i))
            cout << i << " ";
        i++;
    }
    cout << endl;
}