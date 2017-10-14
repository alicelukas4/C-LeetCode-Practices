//remove duplicate (integer type)
//input = [2, 3, 5, 2, 3, 10]
//output = [2, 3, 5, 10]

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> 

void remove_duplicate(int *input, int size)
{
	int *output = (int*)calloc(size, sizeof(int));
	int counter = 0;
	bool duplicate_found = false;

	printf("Output: ");
	for (int i = 0; i < size; i++)
	{
		if (counter == 0)
		{
			output[counter] = input[i];
			printf("%d, ", output[counter]);
			counter++;
		}
		else
		{
			for (int j = 0; j < counter; j++)
			{
				if (output[j] == input[i])
				{
					duplicate_found = true;
					break;
				}
			}

			if (duplicate_found == false)
			{
				output[counter] = input[i];
				printf("%d, ", output[counter]);
				counter++;
			}
			duplicate_found = false;

		}

	}
	printf("\n");
	free(output);


}

void main() {
	int input[] = { 2, 3, 5, 2, 3, 10 };
	printf("Input: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d, ", input[i]);
	}
	remove_duplicate(input, 6);

	int input1[] = { 2, 3, 5, 2, 3, 10 , 19, 10, 10, 3, 5};
	printf("Input: ");
	for (int i = 0; i < 11; i++)
	{
		printf("%d, ", input1[i]);
	}
	remove_duplicate(input1, 11);
}
