#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, og, sum = 0;
    cout << "Enter a 3 digit number: ";
    cin >> n; og = n;
    while(n > 0){
        sum += pow((n%10), 3);
        n /= 10; 
    }
    if(sum == og)
        cout << og << " is an armstrong number." << endl;
    else 
        cout << og << " is not an armstrong number" << endl;
}