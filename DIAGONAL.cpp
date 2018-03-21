/*#include "EasyBMP.h"

int main()
{
	BMP bitmap;
	bitmap.SetBitDepth(32);
	uint16_t x, y;
	uint8_t a, b, c, d;
	uint8_t* ch16[][4] = { { &a, &b, &c, &d },{ &d, &a, &b, &c },{ &c, &d, &a, &b },{ &b, &c, &d, &a } };
	bitmap.SetSize(4, 4);
	char name16[][14] = { "D_00_16_A.BMP", "D_01_16_R.BMP", "D_02_16_G.BMP", "D_03_16_B.BMP" };	
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 4)
		{
			while (x < 4)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++x;
				a += 17;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16[i]);
	}
	uint8_t* ch256[][4] =
	{
		{ &a, &b, &c, &d },{ &a, &c, &b, &d },{ &a, &c, &d, &b },{ &b, &a, &c, &d },{ &c, &a, &b, &d },{ &c, &a, &d, &b },
		{ &b, &c, &a, &d },{ &c, &b, &a, &d },{ &c, &d, &a, &b },{ &b, &c, &d, &a },{ &c, &b, &d, &a },{ &c, &d, &b, &a },
	};
	bitmap.SetSize(16, 16);
	char name256[][16] =
	{
		"D_04_256_AR.BMP", "D_05_256_AG.BMP", "D_06_256_AB.BMP", "D_07_256_RA.BMP", "D_08_256_RG.BMP", "D_09_256_RB.BMP",
		"D_10_256_GA.BMP", "D_11_256_GR.BMP", "D_12_256_GB.BMP", "D_13_256_BA.BMP", "D_14_256_BR.BMP", "D_15_256_BG.BMP"
	};	
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 16)
		{
			while (x < 16)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				++a;
				++b;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name256[i]);
	}
	uint8_t* ch4096_65536[][4] =
	{
		{ &a, &b, &c, &d },{ &a, &b, &d, &c },{ &a, &c, &b, &d },{ &a, &d, &b, &c },{ &a, &c, &d, &b },{ &a, &d, &c, &b },
		{ &b, &a, &c, &d },{ &b, &a, &d, &c },{ &c, &a, &b, &d },{ &d, &a, &b, &c },{ &c, &a, &d, &b },{ &d, &a, &c, &b },
		{ &b, &c, &a, &d },{ &b, &d, &a, &c },{ &c, &b, &a, &d },{ &d, &b, &a, &c },{ &c, &d, &a, &b },{ &d, &c, &a, &b },
		{ &b, &c, &d, &a },{ &b, &d, &c, &a },{ &c, &b, &d, &a },{ &d, &b, &c, &a },{ &c, &d, &b, &a },{ &d, &c, &b, &a },
	};
	bitmap.SetSize(64, 64);
	char name4096[][18] =
	{
		"D_16_4096_ARG.BMP", "D_17_4096_ARB.BMP", "D_18_4096_AGR.BMP", "D_19_4096_AGB.BMP", "D_20_4096_ABR.BMP", "D_21_4096_ABG.BMP",
		"D_22_4096_RAG.BMP", "D_23_4096_RAB.BMP", "D_24_4096_RGA.BMP", "D_25_4096_RGB.BMP", "D_26_4096_RBA.BMP", "D_27_4096_RBG.BMP",
		"D_28_4096_GAR.BMP", "D_29_4096_GAB.BMP", "D_30_4096_GRA.BMP", "D_31_4096_GRB.BMP", "D_32_4096_GBA.BMP", "D_33_4096_GBR.BMP",
		"D_34_4096_BAR.BMP", "D_35_4096_BAG.BMP", "D_36_4096_BRA.BMP", "D_37_4096_BRG.BMP", "D_38_4096_BGA.BMP", "D_39_4096_BGR.BMP",
	};	
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 64)
		{
			while (x < 64)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				++x;
				if (x % 16 == 0) ++c;
				if (a == 255) ++b;
				++a;
				b += 16;				
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name4096[i]);
	}
	bitmap.SetSize(256, 256);
	char name65536[][20] =
	{
		"D_40_65536_ARGB.BMP", "D_41_65536_ARBG.BMP", "D_42_65536_AGRB.BMP", "D_43_65536_AGBR.BMP", "D_44_65536_ABRG.BMP", "D_45_65536_ABGR.BMP",
		"D_46_65536_RAGB.BMP", "D_47_65536_RABG.BMP", "D_48_65536_RGAB.BMP", "D_49_65536_RGBA.BMP", "D_50_65536_RBAG.BMP", "D_51_65536_RBGA.BMP",
		"D_52_65536_GARB.BMP", "D_53_65536_GABR.BMP", "D_54_65536_GRAB.BMP", "D_55_65536_GRBA.BMP", "D_56_65536_GBAR.BMP", "D_57_65536_GBRA.BMP",
		"D_58_65536_BARG.BMP", "D_59_65536_BAGR.BMP", "D_60_65536_BRAG.BMP", "D_61_65536_BRGA.BMP", "D_62_65536_BGAR.BMP", "D_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 256)
		{
			while (x < 256)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				++x;
				++a;
				++c;
			}
			++y;
			++b;
			++d;
			x = 0;
		}
		bitmap.WriteToFile(name65536[i]);
	}
	return 0;
}*/