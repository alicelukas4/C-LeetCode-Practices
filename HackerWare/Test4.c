// Livanova Interview Q4 HackerRank 
// Scan legit floating point number
// fail the following inputs: 1.1.2, --1, +, -, 
//
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>cl Test4.c 
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>Test4
//	1.1
//	yes
//C : \Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>Test4
//	1.2.2
//	no

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


/*
* Complete the function below.
*/
static int lexer(char *in, int bytes) {
	bool is_valid = true;
	bool is_decimal = false;

	for (int i = 0; i < bytes; i++)
	{
		//printf("%c", in[i]); 
		if (!(in[i] >= '0' && in[i] <= '9')) //is_digit
		{
			if (in[i] == '.' && !is_decimal)
			{
				is_decimal = true;
			}
			else if (i == 0 && (in[i] == '-' || in[i] == '+'))
			{
				//is_signed
			}
			else
			{
				is_valid = false;
				return -1;
			}
		}
		//takes care of 1 character case such as '.', '+', '-'
		if (bytes == 1)
		{
			if (!(in[i] >= '0' && in[i] <= '9')) //is_digit
			{
				is_valid = false;
				return -1;
			}
		}
	}
	return 0;
}

int main()
{
	int i;
	char input[1024];
	int ioffset;
	unsigned char kin;          // keyboard input 

	fgets(input, sizeof(input), stdin);
	ioffset = strlen(input);
	if (lexer(input, ioffset - 1) >= 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}

