#include <stdio.h>

// To execute C, please define "int main()"



void swap(int x)
{	
	printf("\nvalue entered %04x", x);
	int r[20], temp = 0;
	int binary_count = 0;
	int result; 
	// convert int to binary, while doing that, bits are already swapped
	//12 becomes 0011
	while (x >1)
	{
		r[binary_count] = x % 2;
		x /= 2;
		binary_count++;
	}
	r[binary_count] = x;
	
	printf("\nvalue converted to binary:\n");
	for (int j = 0; j <= binary_count; j++)
	{
		printf("%d", r[j]); 
	}

	int half_binary_count = (binary_count / 2);
	int k = binary_count;

	// swap back to 1100
	for (int j = 0; j<=half_binary_count; j++)
	{
		temp = r[j];
		r[j] = r[k];
		r[k] = temp;
		k--;
	}
	printf("\nBinary swapped:\n");
	for (int j = 0; j <= binary_count; j++)
	{
		printf("%d", r[j]);
	}
	
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("Hello, World\n");
	}
	swap(0xa1b2);
	return 0;
}