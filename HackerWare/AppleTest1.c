#include <stdio.h>

// To execute C, please define "int main()"

int main() {
	for (int i = 0; i < 5; i++) {
		printf("Hello, World\n");
	}
	printf("%i",foo(5));
	return 0;
}


int foo(int n) {
	int c = 0;
	for (; n; n = n&(n - 1), c++);
	return c;
}
// n = n&(n - 1) is used to check if n is power of two or not 
// what is c value. Answer is 2
