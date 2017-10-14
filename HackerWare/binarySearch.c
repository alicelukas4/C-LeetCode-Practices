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

bool binarySearch(int* input, int key, int size)
{
	int hi = size-1;
	int lo = 0;
	int medium = (hi+lo) / 2;
	bool found = false;
	
	//sort

	//find
	while (!found && size >=1 )
	{
		printf("m %i %i %i %i %i %i", hi, lo, medium, input[hi], input[lo], input[medium]);
		if (key > input[hi] || key < input[lo])
		{
			break;
		}
		else if (key == input[hi] || key == input[lo] || key == input[medium])
		{
			found = true;
		}
		else if ((hi - lo) == 1)
		{
			break; 
		}
		else if (key < input[medium])
		{
			hi = medium;
			medium = (hi + lo) / 2;
			size = (hi + lo) / 2 + 1;
		}
		else if (key > input[medium])
		{
			lo = medium;
			size = (hi + lo) / 2 + 1;
			medium = (hi + lo) / 2;
		}
		else 
		{
			break; 
		}
	}
	if (found == true) return 1;
	else return 0;
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
	bool found = binarySearch(input, key, size);
	if(found == true)
		printf("found: %s", "YES");
	else 
		printf("found: %s", "NO");
	
}


