// Livanova Interview Q1 HackerRank 
// Bubble sort in descending order
//
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>cl Test1.c 
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>Test1
//1
//2
//3
//4
//5
//
//5, 4, 3, 2, 1, yes
//

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int numberOccurences(int* input, int key, int size)
{
	int count = 0; 
	for (int i = 0; i < size; i++)
	{
		if (input[i] == key)
		{
			count++; 
		}
	}
	return count; 
}

int main()
{
	int size; 
	int key; 
	printf("Enter the size of array: (must be less than 20)");
	{
		scanf("%i", &size);
	}
	int input[20];
	printf("Enter numbers:");
	for (int i = 0; i < size; i++)
	{
		scanf("%i", &input[i]);
	}
	printf("Enter key to search:");
	{
		scanf("%i", &key);
	}
	int count = numberOccurences(input, key, size);
	printf("count: %i", count);
	
	
}


