/*#include "EasyBMP.h"*/

//to change behavior just change which of A R G or B is ONE TWO THREE or FOUR
/*int main()
{
	BMP bitmap;
	bitmap.SetSize(16,16);
	bitmap.SetBitDepth(32);
	uint8_t x = 0;
	uint8_t y = 0;
	uint8_t ONE = 0;
	uint8_t TWO = 0;
	uint8_t THREE = 0;
	uint8_t FOUR = 0;
	while (y < 16)
	{
		while (x < 16)
		{
			bitmap(x, y)->Alpha = ONE;
			bitmap(x, y)->Red = TWO;
			bitmap(x, y)->Green = THREE;
			bitmap(x, y)->Blue = FOUR;
			++x;
			++ONE;
		}
		++y;
		x = 0;
	}
	bitmap.WriteToFile("16.BMP");
	return 0;
}*/
/*int main()
{
	BMP bitmap;
	bitmap.SetSize(256,256);
	bitmap.SetBitDepth(32);
	uint16_t x = 0;
	uint16_t y = 0;
	uint8_t ONE = 0;
	uint8_t TWO = 0;
	uint8_t THREE = 0;
	uint8_t FOUR = 0;
	while (y < 256)
	{
		while (x < 256)
		{
			bitmap(x, y)->Alpha = ONE;
			bitmap(x, y)->Red = TWO;
			bitmap(x, y)->Green = THREE;
			bitmap(x, y)->Blue = FOUR;
			++x;
			++ONE;
		}
		++y;
		++TWO;
		x = 0;
	}
	bitmap.WriteToFile("256.BMP");
	return 0;
}*/
/*int main()
{
	BMP bitmap;
	bitmap.SetSize(4096,4096);
	bitmap.SetBitDepth(32);
	uint16_t x = 0;
	uint16_t y = 0;
	uint8_t ONE = 0;
	uint8_t TWO = 0;
	uint8_t THREE = 0;
	uint8_t FOUR = 0;
	while (y < 4096)
	{
		while (x < 4096)
		{
			bitmap(x, y)->Alpha = ONE;
			bitmap(x, y)->Red = TWO;
			bitmap(x, y)->Green = THREE;
			bitmap(x, y)->Blue = FOUR;
			if (ONE == 255) ++TWO;
			++x;
			++ONE;			
		}
		if (TWO == 0) ++THREE;
		++y;
		x = 0;
	}
	bitmap.WriteToFile("4096.BMP");
	return 0;
}*/
/*int main()
{
	BMP bitmap;
	bitmap.SetSize(32768, 32768);
	bitmap.SetBitDepth(32);
	uint16_t x = 0;
	uint16_t y = 0;
	uint8_t ONE = 0;
	uint8_t TWO = 0; //put 0 for LEFT HALF, 128 for RIGHT HALF
	uint8_t THREE = 0;
	uint8_t FOUR = 0; //put 0 for TOP HALF, 128 for BOTTOM HALF
	while (y < 32768) //have to construct in pieces because BMP MAX SIZE 65535x65535. we will only need 4GB RAM for this operation
	{
		while (x < 32768)
		{
			bitmap(x, y)->Alpha = ONE;
			bitmap(x, y)->Red = TWO;
			bitmap(x, y)->Green = THREE;
			bitmap(x, y)->Blue = FOUR;
			if (ONE == 255) ++TWO;
			++x;
			++ONE;			
		}
		TWO = 0; //LEFT HALF: TWO = 0; RIGHT HALF: TWO = 128; (no need to check any conditions because TWO will always reach its end at this point. so just reset it.)
		if (THREE == 255) ++FOUR; //dont have to tell FOUR to go back to 0 or 128 because by the time it hits 127 or 255, the program terminates
		++y;
		++THREE;
		x = 0;
	}
	bitmap.WriteToFile("65536_0.BMP"); //0 for TOP-LEFT, 1 for TOP-RIGHT, 2 for BOTTOM-LEFT, 3 for BOTTOM-RIGHT
	return 0;
}*/
/*int main() //IMPOSSIBLE DUE TO BMP SPECS (MAX 65535)
{
	BMP bitmap;
	bitmap.SetSize(65536, 65536);
	bitmap.SetBitDepth(32);
	uint32_t x = 0;
	uint32_t y = 0;
	uint8_t ONE = 0;
	uint8_t TWO = 0;
	uint8_t THREE = 0;
	uint8_t FOUR = 0;
	while (y < 65536)
	{
		while (x < 65536)
		{
			bitmap(x, y)->Alpha = ONE;
			bitmap(x, y)->Red = TWO;
			bitmap(x, y)->Green = THREE;
			bitmap(x, y)->Blue = FOUR;
			if (ONE == 255) ++TWO;
			++x;
			++ONE;
		}
		TWO = 0;
		if (THREE == 255) ++FOUR;
		++y;
		++THREE;
		x = 0;
	}
	bitmap.WriteToFile("65536.BMP");
	return 0;
}*/