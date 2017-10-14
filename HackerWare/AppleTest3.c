#include <stdio.h>

// To execute C, please define "int main()"
void swap(long num)
{	
	printf("\nBefore swap: %08x", num);
	long newNum1 = (num & 0xFF000000) >> 24;
	printf("\n1: %08x", newNum1);
	long newNum2 = (num & 0x00FF0000) >> 8;
	printf("\n2: %08x", newNum2);
	long newNum3 = (num & 0x0000FF00) << 8;
	printf("\n3: %08x", newNum3);
	long newNum4 = (num & 0x000000FF) << 24;
	printf("\n4: %08x", newNum4);
	long newNum = newNum1 | newNum2 | newNum3 | newNum4;
	printf("\nAfter Swap: %08x", newNum);
}

int main() {
	for (int i = 0; i < 5; i++) {
		printf("Hello, World\n");
	}
	swap(0xa1b2c3d4);
	return 0;
}



