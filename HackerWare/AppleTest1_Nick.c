//Write fibonacci recursive

#include <stdio.h>
#include <stdint.h>

int fibo(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return(fibo(num - 1) + fibo(num - 2));
	}
}

void main() {
	//Fibo numbers: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

	int res = fibo(8);
	printf("The 8 number in fibonacci series is %d\n", res); 

	res = fibo(11);
	printf("The 11 number in fibonacci series is %d\n", res);
}
