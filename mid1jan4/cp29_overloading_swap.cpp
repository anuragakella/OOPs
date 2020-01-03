#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
float swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
char swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int c = 10, d = 20;
    float e = 3.4, f = 9.0;
    char x = 'p', y = 'o';
    printf("Before  INT %d %d, FLOAT %f %f, CHAR %c %c", c, d, e, f, x, y);
    swap(c, d);
    swap(e, f);
    swap(x, y);
    cout << endl;
    printf("After  INT %d %d, FLOAT %f %f, CHAR %c %c", c, d, e, f, x, y);
}