#include <stdio.h>
#include <stdint.h>

// To execute C, please define "int main()"
// RGB565 conversion in place
// A known size of bytes of framebuffer data. RGB format. R = 5, G = 6, B = 5 --> 16 bits.
// Upscale to 24-bit colour. RGB888.


void convert16To24Bits(int x, unsigned char *red, unsigned char *green, unsigned char *blue) //32 bits
{
	//RRRR R000 0000 0000 -> 0000 0000 000R RRRR
	int  red1 = (x & 0xF800) >> 11;
	//0000 0GGG GGG0 0000 -> 0000 0000 00GG GGGG
	int  green1 = (x & 0x07E0) >> 5;
	//0000 0000 000B BBBB -> 0000 0000 000B BBBB
	int  blue1 = (x & 0x001F);

	//0000 0000 000R RRRR -> //RRRR RRRR
	*red = ((double)red1 * 255.0 ) / 31.0;
	//0000 0000 000B BBBB -> //BBBB BBBB
	*blue = ((double)blue1 * 255.0) / 31.0;
	//0000 0000 00GG GGGG -> //GGGG GGGG
	*green = ((double)green1 * 255.0) / 63.0;
	printf("\n\n--%d %d %d--",*red, *green, *blue);
}

int main() {
	 
	int color_white = 0xFFFF;
	int color_black = 0x0000;
	int color_red = 0xF800;
	int color_green = 0x07E0;
	int color_blue = 0x001F;

	unsigned char red = 0;
	unsigned char green = 0;
	unsigned char blue = 0;
	convert16To24Bits(color_white, &red, &green, &blue);
	printf("\nWhite: %04x %d %d %d", color_white, red, green, blue);
	printf("\nWhite: %06x", blue + 256*green + 65536*red);

	//red = 0, green = 0, blue = 0;
	convert16To24Bits(color_black, &red, &green, &blue);
	printf("\nBlack: %04x %d %d %d", color_black, red, green, blue);
	printf("\nBlack: %06x", blue + 256*green + 65536*red);

	//red = 0, green = 0, blue = 0;
	convert16To24Bits(color_red, &red, &green, &blue);
	printf("\nRed: %04x %d %d %d", color_red, red, green, blue);
	printf("\nRed: %06x", blue + 256*green + 65536*red);

	//red = 0, green = 0, blue = 0;
	convert16To24Bits(color_green, &red, &green, &blue);
	printf("\nGreen: %04x %d %d %d", color_green, red, green, blue);
	printf("\nGreen: %06x", blue + 256*green + 65536*red);

	//red = 0, green = 0, blue = 0;
	convert16To24Bits(color_blue, &red, &green, &blue);
	printf("\nBlue: %04x %d %d %d", color_blue, red, green, blue);
	printf("\nBlue: %06x", blue + 256*green + 65536*red);

	return 0;
}



