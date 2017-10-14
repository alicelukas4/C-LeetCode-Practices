// Livanova Interview Q2 HackerRank 
// Convert decimal to binary and swap from MSB to LSB
//
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>cl Test2.c 
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>Test2
//11
//00000000000000000000000000001011
//11010000000000000000000000000000
//

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int reverse(int in) {
	//swap adjacent odd and even bits
	in = ((in >> 1) & 0x55555555u) | ((in & 0x55555555u) << 1);
	//swap adjacent odd and even 2-bits
	in = ((in >> 2) & 0x33333333u) | ((in & 0x33333333u) << 2);
	//swap adjacent odd and even nibbles (4 bits)
	in = ((in >> 4) & 0x0f0f0f0fu) | ((in & 0x0f0f0f0fu) << 4);
	//swap adjacent odd and even byte (8 bits)
	in = ((in >> 8) & 0x00ff00ffu) | ((in & 0x00ff00ffu) << 8);
	//swap adjacent odd and even word (16 bits)
	in = ((in >> 16) & 0xffffu) | ((in & 0xffffu) << 16);
	return in;
}

static void print_bits(int in)
{
	int i;
	unsigned int mask;

	mask = 0x80000000;
	for (i = 0; i < 32; i++)
	{
		printf("%s", in & mask ? "1" : "0");
		mask >>= 1;
	}
	printf("\n");
}

int main()
{
	char in[100];
	int val;

	while (fgets(in, sizeof(in), stdin))
	{
		val = strtol(in, 0, 0);
		if (val)
		{
			print_bits(val);
			print_bits(reverse(val));
		}
	}
}