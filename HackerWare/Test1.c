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

#define MAX_ELEMENTS    1000
static int elements[MAX_ELEMENTS];

/*
* Complete the function below.
*/
void sort(int *array, int num_elements) {
	int i, j;
	for (int i = 0; i<num_elements - 1; i++)
	{
		for (int j = 0; j < num_elements - i - 1; j++)
		{
			if (array[j] < array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < num_elements; i++)
	{
		printf("%i, ", array[i]);
	}
}

static int is_sorted(int num_elements)
{
	int val;
	int i;

	if (!num_elements)
	{
		return 1;
	}
	if (num_elements == 1)
	{
		return 1;
	}

	val = elements[0];
	for (i = 1; i < num_elements; i++)
	{
		if (val < elements[i])
		{
			return 0;
		}
		val = elements[i];
	}
	return 1;
}



int main(int argc, char *argv[])
{
	char in[100];
	int num_elements;
	int val;
	int i;

	num_elements = 0;
	while (fgets(in, sizeof(in), stdin))
	{
		val = strtol(in, 0, 0);
		if (!val)
		{
			break;
		}
		if (num_elements >= MAX_ELEMENTS)
		{
			printf("Test Input failure!!\n");
			exit(1);
		}
		elements[num_elements++] = strtol(in, 0, 0);
	}
	sort(elements, num_elements);

	printf("%s\n", is_sorted(num_elements) ? "yes" : "no");


}


