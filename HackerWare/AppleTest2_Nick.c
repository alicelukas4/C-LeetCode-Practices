//Vaguely remember the question, but here is what i think the question is  
//Find common ASCII character?
//input1 = AAADEFG
//input2 = ADEFG
//Output = ADEFG

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char commonChar(char StringIn1[], char StringIn2[])
{
	int array[256] = { 0 };
	int i = 0; 
	while (StringIn1[i] != '\0')
	{
		array[(int)StringIn1[i]]++;
		i++; 
	}

	i = 0;
	while (StringIn2[i] != '\0')
	{
		if (array[StringIn2[i]] != 0)
		{
			char result = (char)StringIn2[i];
			printf("%c,  ", result);
		}
		i++;
	}
}

void main() 
{
	char StringIn1[40] = "hellogggthere333"; 
	char StringIn2[40] = "helldotherfe";
	commonChar(StringIn1, StringIn2);
}
