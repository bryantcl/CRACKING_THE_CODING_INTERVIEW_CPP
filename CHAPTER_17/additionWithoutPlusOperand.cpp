/* Add two number without using the + operator */

#include <iostream>
#include <cstdlib>
using namespace std;

int add_loop(int a, int b) {
	for (int i = 0; i < b; i++) {
		a++;
	}
	
	return a;
}

int add_recursion(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return add_recursion(a ^ b, (unsigned) (a & b) << 1);
	}

}

int main(int argc, char *argv[]) {
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	cout << "Result from add_loop function: " << add_loop(x, y) << endl;
	cout << "Result from add_recursion function: " << add_recursion(x, y) << endl;

	return 0;
}
