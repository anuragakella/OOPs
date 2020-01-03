#include<iostream>
using namespace std;
int main(){
	int mat[3][3], i, j;
    float inv[3][3];
	float determinant = 0;
	cout<<"Matrix Elements: ";
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
           cin>>mat[i][j];
	
	cout << "Input: " << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			cout<<mat[i][j]<<" ";
        cout << endl;
	}
	for(i = 0; i < 3; i++)
		determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
	
	cout<<"\nDeterminant: "<<determinant << endl;
    if(determinant != 0){
	cout<<"Inverse: \n";
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			inv[i][j] = ((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ (float)determinant;
	}
    for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
            cout << inv[i][j] << " ";
            cout << endl;
	}
    }
    else {
        cout << "Inverse Doesn't Exist.";
    }
}