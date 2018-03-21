/*#include "EasyBMP.h"

int main()
{
	BMP bitmap;
	bitmap.SetBitDepth(32);
	uint16_t x, y;
	uint8_t a, b, c, d;
	uint8_t* ch16[][4] = { { &a, &b, &c, &d },{ &d, &a, &b, &c },{ &c, &d, &a, &b },{ &b, &c, &d, &a } };
	bitmap.SetSize(256, 1);
	char name16_LINE[][15] = { "IL_00_16_A.BMP", "IL_01_16_R.BMP", "IL_02_16_G.BMP", "IL_03_16_B.BMP" };
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1)
		{
			while (x < 256)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++a;
				++x;
			}
			++y;
		}
		bitmap.WriteToFile(name16_LINE[i]);
	}
	bitmap.SetSize(256, 256);
	char name16_SQUARE[][15] = { "IS_00_16_A.BMP", "IS_01_16_R.BMP", "IS_02_16_G.BMP", "IS_03_16_B.BMP" };
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 256)
		{
			while (x < 256)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++a;
				++x;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16_SQUARE[i]);
	}
	uint8_t* ch256[][4] =
	{
		{ &a, &b, &c, &d },{ &a, &c, &b, &d },{ &a, &c, &d, &b },{ &b, &a, &c, &d },{ &c, &a, &b, &d },{ &c, &a, &d, &b },
		{ &b, &c, &a, &d },{ &c, &b, &a, &d },{ &c, &d, &a, &b },{ &b, &c, &d, &a },{ &c, &b, &d, &a },{ &c, &d, &b, &a },
	};
	bitmap.SetSize(511, 1);
	char name256_LINE[][17] =
	{
		"IL_04_256_AR.BMP", "IL_05_256_AG.BMP", "IL_06_256_AB.BMP", "IL_07_256_RA.BMP", "IL_08_256_RG.BMP", "IL_09_256_RB.BMP",
		"IL_10_256_GA.BMP", "IL_11_256_GR.BMP", "IL_12_256_GB.BMP", "IL_13_256_BA.BMP", "IL_14_256_BR.BMP", "IL_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1)
		{
			while (x < 511)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				if (a != 255) ++a;
				else ++b;
				++x;
			}
			++y;
		}
		bitmap.WriteToFile(name256_LINE[i]);
	}
	bitmap.SetSize(511, 511);
	char name256_SQUARE[][17] =
	{
		"IS_04_256_AR.BMP", "IS_05_256_AG.BMP", "IS_06_256_AB.BMP", "IS_07_256_RA.BMP", "IS_08_256_RG.BMP", "IS_09_256_RB.BMP",
		"IS_10_256_GA.BMP", "IS_11_256_GR.BMP", "IS_12_256_GB.BMP", "IS_13_256_BA.BMP", "IS_14_256_BR.BMP", "IS_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 511)
		{
			while (x < 511)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				if (a != 255) ++a;
				else ++b;
				++x;
			}
			++y;
			x = 0;
			a = 0; b = 0;
		}
		bitmap.WriteToFile(name256_SQUARE[i]);
	}
	uint8_t* ch4096_65536[][4] =
	{
		{ &a, &b, &c, &d },{ &a, &b, &d, &c },{ &a, &c, &b, &d },{ &a, &d, &b, &c },{ &a, &c, &d, &b },{ &a, &d, &c, &b },
		{ &b, &a, &c, &d },{ &b, &a, &d, &c },{ &c, &a, &b, &d },{ &d, &a, &b, &c },{ &c, &a, &d, &b },{ &d, &a, &c, &b },
		{ &b, &c, &a, &d },{ &b, &d, &a, &c },{ &c, &b, &a, &d },{ &d, &b, &a, &c },{ &c, &d, &a, &b },{ &d, &c, &a, &b },
		{ &b, &c, &d, &a },{ &b, &d, &c, &a },{ &c, &b, &d, &a },{ &d, &b, &c, &a },{ &c, &d, &b, &a },{ &d, &c, &b, &a },
	};
	bitmap.SetSize(766, 1);
	char name4096_LINE[][19] =
	{
		"IL_16_4096_ARG.BMP", "IL_17_4096_ARB.BMP", "IL_18_4096_AGR.BMP", "IL_19_4096_AGB.BMP", "IL_20_4096_ABR.BMP", "IL_21_4096_ABG.BMP",
		"IL_22_4096_RAG.BMP", "IL_23_4096_RAB.BMP", "IL_24_4096_RGA.BMP", "IL_25_4096_RGB.BMP", "IL_26_4096_RBA.BMP", "IL_27_4096_RBG.BMP",
		"IL_28_4096_GAR.BMP", "IL_29_4096_GAB.BMP", "IL_30_4096_GRA.BMP", "IL_31_4096_GRB.BMP", "IL_32_4096_GBA.BMP", "IL_33_4096_GBR.BMP",
		"IL_34_4096_BAR.BMP", "IL_35_4096_BAG.BMP", "IL_36_4096_BRA.BMP", "IL_37_4096_BRG.BMP", "IL_38_4096_BGA.BMP", "IL_39_4096_BGR.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1)
		{
			while (x < 766)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a != 255) ++a;
				else if (b != 255) ++b;
				else ++c;
				++x;
			}
			++y;
		}
		bitmap.WriteToFile(name4096_LINE[i]);
	}
	bitmap.SetSize(766, 766);
	char name4096_SQUARE[][19] =
	{
		"IS_16_4096_ARG.BMP", "IS_17_4096_ARB.BMP", "IS_18_4096_AGR.BMP", "IS_19_4096_AGB.BMP", "IS_20_4096_ABR.BMP", "IS_21_4096_ABG.BMP",
		"IS_22_4096_RAG.BMP", "IS_23_4096_RAB.BMP", "IS_24_4096_RGA.BMP", "IS_25_4096_RGB.BMP", "IS_26_4096_RBA.BMP", "IS_27_4096_RBG.BMP",
		"IS_28_4096_GAR.BMP", "IS_29_4096_GAB.BMP", "IS_30_4096_GRA.BMP", "IS_31_4096_GRB.BMP", "IS_32_4096_GBA.BMP", "IS_33_4096_GBR.BMP",
		"IS_34_4096_BAR.BMP", "IS_35_4096_BAG.BMP", "IS_36_4096_BRA.BMP", "IS_37_4096_BRG.BMP", "IS_38_4096_BGA.BMP", "IS_39_4096_BGR.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 766)
		{
			while (x < 766)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a != 255) ++a;
				else if (b != 255) ++b;
				else ++c;
				++x;
			}
			++y;
			x = 0;
			a = 0; b = 0; c = 0;
		}
		bitmap.WriteToFile(name4096_SQUARE[i]);
	}
	bitmap.SetSize(1021, 1);
	char name65536_LINE[][21] =
	{
		"IL_40_65536_ARGB.BMP", "IL_41_65536_ARBG.BMP", "IL_42_65536_AGRB.BMP", "IL_43_65536_AGBR.BMP", "IL_44_65536_ABRG.BMP", "IL_45_65536_ABGR.BMP",
		"IL_46_65536_RAGB.BMP", "IL_47_65536_RABG.BMP", "IL_48_65536_RGAB.BMP", "IL_49_65536_RGBA.BMP", "IL_50_65536_RBAG.BMP", "IL_51_65536_RBGA.BMP",
		"IL_52_65536_GARB.BMP", "IL_53_65536_GABR.BMP", "IL_54_65536_GRAB.BMP", "IL_55_65536_GRBA.BMP", "IL_56_65536_GBAR.BMP", "IL_57_65536_GBRA.BMP",
		"IL_58_65536_BARG.BMP", "IL_59_65536_BAGR.BMP", "IL_60_65536_BRAG.BMP", "IL_61_65536_BRGA.BMP", "IL_62_65536_BGAR.BMP", "IL_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1)
		{
			while (x < 1021)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a != 255) ++a;
				else if (b != 255) ++b;
				else if (c != 255) ++c;
				else ++d;
				++x;
			}
			++y;
		}
		bitmap.WriteToFile(name65536_LINE[i]);
	}
	bitmap.SetSize(1021, 1021);
	char name65536_SQUARE[][21] =
	{
		"IS_40_65536_ARGB.BMP", "IS_41_65536_ARBG.BMP", "IS_42_65536_AGRB.BMP", "IS_43_65536_AGBR.BMP", "IS_44_65536_ABRG.BMP", "IS_45_65536_ABGR.BMP",
		"IS_46_65536_RAGB.BMP", "IS_47_65536_RABG.BMP", "IS_48_65536_RGAB.BMP", "IS_49_65536_RGBA.BMP", "IS_50_65536_RBAG.BMP", "IS_51_65536_RBGA.BMP",
		"IS_52_65536_GARB.BMP", "IS_53_65536_GABR.BMP", "IS_54_65536_GRAB.BMP", "IS_55_65536_GRBA.BMP", "IS_56_65536_GBAR.BMP", "IS_57_65536_GBRA.BMP",
		"IS_58_65536_BARG.BMP", "IS_59_65536_BAGR.BMP", "IS_60_65536_BRAG.BMP", "IS_61_65536_BRGA.BMP", "IS_62_65536_BGAR.BMP", "IS_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1021)
		{
			while (x < 1021)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a != 255) ++a;
				else if (b != 255) ++b;
				else if (c != 255) ++c;
				else ++d;
				++x;
			}
			++y;
			x = 0;
			a = 0; b = 0; c = 0; d = 0;
		}
		bitmap.WriteToFile(name65536_SQUARE[i]);
	}
	return 0;
}*/