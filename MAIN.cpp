/*#include "EasyBMP.h"

int main()
{
	BMP bitmap;
	bitmap.SetBitDepth(32);
	uint16_t x, y;
	uint8_t a, b, c, d;
	bitmap.SetSize(16, 16);
	char name16[][12] = { "00_16_A.BMP", "01_16_R.BMP", "02_16_G.BMP", "03_16_B.BMP" };
	uint8_t* ch16[][4] = { { &a, &b, &c, &d }, { &d, &a, &b, &c }, { &c, &d, &a, &b }, { &b, &c, &d, &a } };
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 16)
		{
			while (x < 16)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++x;
				++a;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16[i]);
	}
	bitmap.SetSize(256, 256);
	char name256[][14] =
	{
		"04_256_AR.BMP", "05_256_AG.BMP", "06_256_AB.BMP", "07_256_RA.BMP", "08_256_RG.BMP", "09_256_RB.BMP",
		"10_256_GA.BMP", "11_256_GR.BMP", "12_256_GB.BMP", "13_256_BA.BMP", "14_256_BR.BMP", "15_256_BG.BMP"
	};
	uint8_t* ch256[][4] =
	{
		{ &a, &b, &c, &d }, { &a, &c, &b, &d }, { &a, &c, &d, &b }, { &b, &a, &c, &d }, { &c, &a, &b, &d }, { &c, &a, &d, &b },
		{ &b, &c, &a, &d }, { &c, &b, &a, &d }, { &c, &d, &a, &b }, { &b, &c, &d, &a }, { &c, &b, &d, &a }, { &c, &d, &b, &a },
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 256)
		{
			while (x < 256)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				++a;
			}
			++y;
			++b;
			x = 0;
		}
		bitmap.WriteToFile(name256[i]);
	}
	bitmap.SetSize(4096, 4096);
	char name4096[][16] =
	{
		"16_4096_ARG.BMP", "17_4096_ARB.BMP", "18_4096_AGR.BMP", "19_4096_AGB.BMP", "20_4096_ABR.BMP", "21_4096_ABG.BMP",
		"22_4096_RAG.BMP", "23_4096_RAB.BMP", "24_4096_RGA.BMP", "25_4096_RGB.BMP", "26_4096_RBA.BMP", "27_4096_RBG.BMP",
		"28_4096_GAR.BMP", "29_4096_GAB.BMP", "30_4096_GRA.BMP", "31_4096_GRB.BMP", "32_4096_GBA.BMP", "33_4096_GBR.BMP",
		"34_4096_BAR.BMP", "35_4096_BAG.BMP", "36_4096_BRA.BMP", "37_4096_BRG.BMP", "38_4096_BGA.BMP", "39_4096_BGR.BMP",
	};
	uint8_t* ch4096_65536[][4] =
	{
		{ &a, &b, &c, &d }, { &a, &b, &d, &c }, { &a, &c, &b, &d }, { &a, &d, &b, &c }, { &a, &c, &d, &b }, { &a, &d, &c, &b },
		{ &b, &a, &c, &d }, { &b, &a, &d, &c }, { &c, &a, &b, &d }, { &d, &a, &b, &c }, { &c, &a, &d, &b }, { &d, &a, &c, &b },
		{ &b, &c, &a, &d }, { &b, &d, &a, &c }, { &c, &b, &a, &d }, { &d, &b, &a, &c }, { &c, &d, &a, &b }, { &d, &c, &a, &b },
		{ &b, &c, &d, &a }, { &b, &d, &c, &a }, { &c, &b, &d, &a }, { &d, &b, &c, &a }, { &c, &d, &b, &a }, { &d, &c, &b, &a },
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 4096)
		{
			while (x < 4096)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 255) ++b;
				++x;
				++a;
			}
			if (b == 0) ++c;
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name4096[i]);
	}
	bitmap.SetSize(32768, 32768);
	char name65536[][20] =
	{
		"40_65536_ARGB_0.BMP", "40_65536_ARGB_1.BMP", "40_65536_ARGB_2.BMP", "40_65536_ARGB_3.BMP", "41_65536_ARBG_0.BMP", "41_65536_ARBG_1.BMP", "41_65536_ARBG_2.BMP", "41_65536_ARBG_3.BMP", "42_65536_AGRB_0.BMP", "42_65536_AGRB_1.BMP", "42_65536_AGRB_2.BMP", "42_65536_AGRB_3.BMP",
		"43_65536_AGBR_0.BMP", "43_65536_AGBR_1.BMP", "43_65536_AGBR_2.BMP", "43_65536_AGBR_3.BMP", "44_65536_ABRG_0.BMP", "44_65536_ABRG_1.BMP", "44_65536_ABRG_2.BMP", "44_65536_ABRG_3.BMP", "45_65536_ABGR_0.BMP", "45_65536_ABGR_1.BMP", "45_65536_ABGR_2.BMP", "45_65536_ABGR_3.BMP",
		"46_65536_RAGB_0.BMP", "46_65536_RAGB_1.BMP", "46_65536_RAGB_2.BMP", "46_65536_RAGB_3.BMP", "47_65536_RABG_0.BMP", "47_65536_RABG_1.BMP", "47_65536_RABG_2.BMP", "47_65536_RABG_3.BMP", "48_65536_RGAB_0.BMP", "48_65536_RGAB_1.BMP", "48_65536_RGAB_2.BMP", "48_65536_RGAB_3.BMP",
		"49_65536_RGBA_0.BMP", "49_65536_RGBA_1.BMP", "49_65536_RGBA_2.BMP", "49_65536_RGBA_3.BMP", "50_65536_RBAG_0.BMP", "50_65536_RBAG_1.BMP", "50_65536_RBAG_2.BMP", "50_65536_RBAG_3.BMP", "51_65536_RBGA_0.BMP", "51_65536_RBGA_1.BMP", "51_65536_RBGA_2.BMP", "51_65536_RBGA_3.BMP",
		"52_65536_GARB_0.BMP", "52_65536_GARB_1.BMP", "52_65536_GARB_2.BMP", "52_65536_GARB_3.BMP", "53_65536_GABR_0.BMP", "53_65536_GABR_1.BMP", "53_65536_GABR_2.BMP", "53_65536_GABR_3.BMP", "54_65536_GRAB_0.BMP", "54_65536_GRAB_1.BMP", "54_65536_GRAB_2.BMP", "54_65536_GRAB_3.BMP",
		"55_65536_GRBA_0.BMP", "55_65536_GRBA_1.BMP", "55_65536_GRBA_2.BMP", "55_65536_GRBA_3.BMP", "56_65536_GBAR_0.BMP", "56_65536_GBAR_1.BMP", "56_65536_GBAR_2.BMP", "56_65536_GBAR_3.BMP", "57_65536_GBRA_0.BMP", "57_65536_GBRA_1.BMP", "57_65536_GBRA_2.BMP", "57_65536_GBRA_3.BMP",
		"58_65536_BARG_0.BMP", "58_65536_BARG_1.BMP", "58_65536_BARG_2.BMP", "58_65536_BARG_3.BMP", "59_65536_BAGR_0.BMP", "59_65536_BAGR_1.BMP", "59_65536_BAGR_2.BMP", "59_65536_BAGR_3.BMP", "60_65536_BRAG_0.BMP", "60_65536_BRAG_1.BMP", "60_65536_BRAG_2.BMP", "60_65536_BRAG_3.BMP",
		"61_65536_BRGA_0.BMP", "61_65536_BRGA_1.BMP", "61_65536_BRGA_2.BMP", "61_65536_BRGA_3.BMP", "62_65536_BGAR_0.BMP", "62_65536_BGAR_1.BMP", "62_65536_BGAR_2.BMP", "62_65536_BGAR_3.BMP", "63_65536_BGRA_0.BMP", "63_65536_BGRA_1.BMP", "63_65536_BGRA_2.BMP", "63_65536_BGRA_3.BMP",
	};
	uint8_t quad[][2] = { { 0, 0 },{ 128, 0 },{ 0, 128 },{ 128, 128 } };
	uint8_t j;
	for (uint8_t i = 0; i < 24; ++i)
	{
		j = i % 4;
		x = 0; y = 0; a = 0; b = quad[j][0]; c = 0; d = quad[j][1];
		while (y < 32768)
		{
			while (x < 32768)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 255) ++b;
				++x;
				++a;
			}
			b = quad[j][0];
			if (c == 255) ++d;
			++y;
			++c;
			x = 0;
		}
		bitmap.WriteToFile(name65536[i]);
	}
	return 0;
}*/