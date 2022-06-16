/*
Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes
write a method to rotate the image by 90 degrees.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

#define N 5

void printMatrix(int a[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

int array1[N][N];
int array2[N][N];

// populating the first array with a random number generator
for (int i = 0; i < N; i++) {
	for (int j = 0; j < N; j++) {
		array1[i][j] = rand() % 100;
	}
}

cout << "Matrix before rotation" << endl;
cout << "----------------------" << endl;
printMatrix(array1);

// rotating matrix and assigning to a new array
for (int i = 0; i < N; i++) {
	for (int j = 0; j < N ; j++) {
		array2[i][j] = array1[N - 1 - j][i];
	}
}

cout << "Matrix after rotation" << endl;
cout << "---------------------" << endl;
printMatrix(array2);

return 0;
}
