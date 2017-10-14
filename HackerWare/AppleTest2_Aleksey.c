//combine 3 floats R, G, B to 32 bits of 10 bits R, 10 bits G and 10 bits B

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> 

bool combineRGB(float r, float g, float b, uint32_t* res)
{
	uint32_t r_10b = r * 1023; 
	uint32_t g_10b = g * 1023;
	uint32_t b_10b = b * 1023;

	*res = r_10b << 20 | g_10b << 10 | b_10b; 

	if ((r > 1.0 || r <0.0)|| (g > 1.0 || g <0.0) || (b > 1.0 || b <0.0))
	{
		return 0; 
	}
	else
	{
		return 1; 
	}
}

void main() {
	float r = 0.035;	//00 0010 0011b or 0x23 when converted to 10 bits 
	float g = 1.0;		//1111 1111 11b or 0xFF when converted to 10 bits 
	float b = 0.000056; //00 0000 0000b or 0x00 when converted to 10 bits  

	uint32_t res; 
	bool success = combineRGB(r, g, b, &res);
	
	if (success == 1)
	{
		printf("Res is %.2x", res);
	}
	else
	{
		printf("Out of bound failure");
	}
}

