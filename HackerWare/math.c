//Write a function that prints out the binary form of an int

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void printBinary(float value)
{
	printf("%f", floor(value));
}

int main()
{
	float value; 
	printf("Enter integer value to convert to binary: ");
	{
		scanf("%f", &value);
	}
	printBinary(value);
}


