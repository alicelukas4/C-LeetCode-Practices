#include <stdio.h>
#include <string.h>

void reverseString(char* input)
{
	printf("%s\n", input);
	int j = strlen(input)-1; 
	for (int i = 0; i < (strlen(input)/2); i++)
	{
		char temp = input[i];
		input[i] = input[j]; 
		input[j] = temp; 
		j--; 
		
	}
}



// To execute C, please define "int main()"

int main() {
	for (int i = 0; i < 5; i++) {
		//printf("Hello, World\n");
		
	}
	char input[] = "Hello, World"; 
	reverseString(input);
	printf("%s\n", input);
	
	return 0;
}
