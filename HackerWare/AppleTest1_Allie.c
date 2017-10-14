//Find out what this program print?

#include <stdio.h>
#include <stdint.h>

void foo() {
	//had to change to 64 bits since i am running on 32 bits machine
	uint64_t x[3] = { 3,2,1};
	return;
}

void bar() {
	uint32_t y[3];
	printf("%.2x %.2x %.2x", y[0], y[1], y[2]);
}

void main() {
	foo();
	bar();
}

