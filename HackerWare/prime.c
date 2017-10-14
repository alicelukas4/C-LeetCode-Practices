//Use dynamic programming to find the first X prime numbers

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void prime(int size)
{
	bool isPrime = true; 
	int array[1000]; 
	int count = 0; 

	for (int i = 3; i < 1000; i++)
	{
		for (int j = 2; j < i; j++)
		{
			//printf("%i div %i eq %i rem%i \n", i, j, i/j, i%j);
			if (i%j == 0)
			{
				isPrime = false; 
			}
		}
		if (isPrime) 
		{
			printf("prime %i, \n", i); 
			count++;
			if (count == size)
				break;
		}
		isPrime = true; 
			
	}
}

int main()
{
	int size; 
	printf("Enter the size of array: (must be less than 20)");
	{
		scanf("%i", &size);
	}
	prime(size); 
}


