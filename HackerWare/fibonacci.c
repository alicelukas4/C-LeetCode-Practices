

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void fibonacci(int size)
{
	int array[20]; 

	array[0] = 0; 
	printf("%i, ", array[0]);
	array[1] = 1; 
	printf("%i, ", array[1]);

	for (int i = 2; i < size; i++)
	{
		array[i] = array[i - 1] + array[i - 2]; 
		printf("%i, ", array[i]); 
	}
}

int main()
{
	int size; 
	printf("Enter the size of array: (must be less than 20)");
	{
		scanf("%i", &size);
	}
	fibonacci(size); 
}


