//Write a function that prints out the binary form of an int

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void printBinary(int value)
{
	int divisor[32];
	int remainder[32];
	int i = 0;
	divisor[0] = value; 

	if (value > 0)
	{
		while(divisor[i] > 1)
		{
			remainder[i] = divisor[i] % 2;
			divisor[i+1] = divisor[i] / 2; 
			i++; 
		}

		printf("%i", divisor[i]); 
		for (int j = i-1; j >= 0; j--)
		{
			printf("%i", remainder[j]);
		}
	}
	
	
}

int main()
{
	int value; 
	printf("Enter integer value to convert to binary: ");
	{
		scanf("%i", &value);
	}
	printBinary(value);
}


