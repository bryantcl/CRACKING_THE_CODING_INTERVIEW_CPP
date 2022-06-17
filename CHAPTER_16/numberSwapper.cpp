/* Write a function to swap a number in place (that is, without temporary variables */
#include <iostream>
using namespace std;

void swap(int x, int y) {

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	cout << x << endl;
	cout << y << endl;
}
int main() {

	int a = 10;
	int b = 5;

	swap(a, b);
	return 0;
}
