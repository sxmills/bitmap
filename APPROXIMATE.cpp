/*#include "EasyBMP.h"

int main()
{
	BMP bitmap;
	bitmap.SetBitDepth(32);
	uint16_t x, y;
	uint8_t a, b, c, d;
	uint8_t* ch16[][4] = { { &a, &b, &c, &d }, { &d, &a, &b, &c }, { &c, &d, &a, &b }, { &b, &c, &d, &a } };
	bitmap.SetSize(2, 2);
	char name16_2[][15] = { "A2_00_16_A.BMP", "A2_01_16_R.BMP", "A2_02_16_G.BMP", "A2_03_16_B.BMP" };
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 2)
		{
			while (x < 2)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++x;
				a += 64;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16_2[i]);
	}
	bitmap.SetSize(4, 4);
	char name16_4[][15] = { "A4_00_16_A.BMP", "A4_01_16_R.BMP", "A4_02_16_G.BMP", "A4_03_16_B.BMP" };
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
				a += 16;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16_4[i]);
	}
	bitmap.SetSize(8, 8);
	char name16_8[][15] = { "A8_00_16_A.BMP", "A8_01_16_R.BMP", "A8_02_16_G.BMP", "A8_03_16_B.BMP" };
	for (uint8_t i = 0; i < 4; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 8)
		{
			while (x < 8)
			{
				bitmap(x, y)->Alpha = *ch16[i][0];
				bitmap(x, y)->Red = *ch16[i][1];
				bitmap(x, y)->Green = *ch16[i][2];
				bitmap(x, y)->Blue = *ch16[i][3];
				++x;
				a += 4;
			}
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name16_8[i]);
	}
	uint8_t* ch256[][4] =
	{
		{ &a, &b, &c, &d }, { &a, &c, &b, &d }, { &a, &c, &d, &b }, { &b, &a, &c, &d }, { &c, &a, &b, &d }, { &c, &a, &d, &b },
		{ &b, &c, &a, &d }, { &c, &b, &a, &d }, { &c, &d, &a, &b }, { &b, &c, &d, &a }, { &c, &b, &d, &a }, { &c, &d, &b, &a },
	};
	bitmap.SetSize(2, 2);
	char name256_2[][17] =
	{
		"A2_04_256_AR.BMP", "A2_05_256_AG.BMP", "A2_06_256_AB.BMP", "A2_07_256_RA.BMP", "A2_08_256_RG.BMP", "A2_09_256_RB.BMP",
		"A2_10_256_GA.BMP", "A2_11_256_GR.BMP", "A2_12_256_GB.BMP", "A2_13_256_BA.BMP", "A2_14_256_BR.BMP", "A2_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 2)
		{
			while (x < 2)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 128;
			}
			++y;
			b += 128;
			x = 0;
		}
		bitmap.WriteToFile(name256_2[i]);
	}
	bitmap.SetSize(4, 4);
	char name256_4[][17] =
	{
		"A4_04_256_AR.BMP", "A4_05_256_AG.BMP", "A4_06_256_AB.BMP", "A4_07_256_RA.BMP", "A4_08_256_RG.BMP", "A4_09_256_RB.BMP",
		"A4_10_256_GA.BMP", "A4_11_256_GR.BMP", "A4_12_256_GB.BMP", "A4_13_256_BA.BMP", "A4_14_256_BR.BMP", "A4_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 4)
		{
			while (x < 4)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 64;
			}
			++y;
			b += 64;
			x = 0;
		}
		bitmap.WriteToFile(name256_4[i]);
	}
	bitmap.SetSize(8, 8);
	char name256_8[][17] =
	{
		"A8_04_256_AR.BMP", "A8_05_256_AG.BMP", "A8_06_256_AB.BMP", "A8_07_256_RA.BMP", "A8_08_256_RG.BMP", "A8_09_256_RB.BMP",
		"A8_10_256_GA.BMP", "A8_11_256_GR.BMP", "A8_12_256_GB.BMP", "A8_13_256_BA.BMP", "A8_14_256_BR.BMP", "A8_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 8)
		{
			while (x < 8)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 32;
			}
			++y;
			b += 32;
			x = 0;
		}
		bitmap.WriteToFile(name256_8[i]);
	}
	bitmap.SetSize(16, 16);
	char name256_16[][18] =
	{
		"A16_04_256_AR.BMP", "A16_05_256_AG.BMP", "A16_06_256_AB.BMP", "A16_07_256_RA.BMP", "A16_08_256_RG.BMP", "A16_09_256_RB.BMP",
		"A16_10_256_GA.BMP", "A16_11_256_GR.BMP", "A16_12_256_GB.BMP", "A16_13_256_BA.BMP", "A16_14_256_BR.BMP", "A16_15_256_BG.BMP"
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
				a += 16;
			}
			++y;
			b += 16;
			x = 0;
		}
		bitmap.WriteToFile(name256_16[i]);
	}
	bitmap.SetSize(32, 32);
	char name256_32[][18] =
	{
		"A32_04_256_AR.BMP", "A32_05_256_AG.BMP", "A32_06_256_AB.BMP", "A32_07_256_RA.BMP", "A32_08_256_RG.BMP", "A32_09_256_RB.BMP",
		"A32_10_256_GA.BMP", "A32_11_256_GR.BMP", "A32_12_256_GB.BMP", "A32_13_256_BA.BMP", "A32_14_256_BR.BMP", "A32_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 32)
		{
			while (x < 32)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 8;
			}
			++y;
			b += 8;
			x = 0;
		}
		bitmap.WriteToFile(name256_32[i]);
	}
	bitmap.SetSize(64, 64);
	char name256_64[][18] =
	{
		"A64_04_256_AR.BMP", "A64_05_256_AG.BMP", "A64_06_256_AB.BMP", "A64_07_256_RA.BMP", "A64_08_256_RG.BMP", "A64_09_256_RB.BMP",
		"A64_10_256_GA.BMP", "A64_11_256_GR.BMP", "A64_12_256_GB.BMP", "A64_13_256_BA.BMP", "A64_14_256_BR.BMP", "A64_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 64)
		{
			while (x < 64)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 4;
			}
			++y;
			b += 4;
			x = 0;
		}
		bitmap.WriteToFile(name256_64[i]);
	}
	bitmap.SetSize(128, 128);
	char name256_128[][19] =
	{
		"A128_04_256_AR.BMP", "A128_05_256_AG.BMP", "A128_06_256_AB.BMP", "A128_07_256_RA.BMP", "A128_08_256_RG.BMP", "A128_09_256_RB.BMP",
		"A128_10_256_GA.BMP", "A128_11_256_GR.BMP", "A128_12_256_GB.BMP", "A128_13_256_BA.BMP", "A128_14_256_BR.BMP", "A128_15_256_BG.BMP"
	};
	for (uint8_t i = 0; i < 12; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 128)
		{
			while (x < 128)
			{
				bitmap(x, y)->Alpha = *ch256[i][0];
				bitmap(x, y)->Red = *ch256[i][1];
				bitmap(x, y)->Green = *ch256[i][2];
				bitmap(x, y)->Blue = *ch256[i][3];
				++x;
				a += 2;
			}
			++y;
			b += 2;
			x = 0;
		}
		bitmap.WriteToFile(name256_128[i]);
	}
	uint8_t* ch4096_65536[24][4] =
	{
		{ &a, &b, &c, &d }, { &a, &b, &d, &c }, { &a, &c, &b, &d }, { &a, &d, &b, &c }, { &a, &c, &d, &b }, { &a, &d, &c, &b },
		{ &b, &a, &c, &d }, { &b, &a, &d, &c }, { &c, &a, &b, &d }, { &d, &a, &b, &c }, { &c, &a, &d, &b }, { &d, &a, &c, &b },
		{ &b, &c, &a, &d }, { &b, &d, &a, &c }, { &c, &b, &a, &d }, { &d, &b, &a, &c }, { &c, &d, &a, &b }, { &d, &c, &a, &b },
		{ &b, &c, &d, &a }, { &b, &d, &c, &a }, { &c, &b, &d, &a }, { &d, &b, &c, &a }, { &c, &d, &b, &a }, { &d, &c, &b, &a },
	};
	bitmap.SetSize(8, 8);
	char name4096_8[][19] =
	{
		"A8_16_4096_ARG.BMP", "A8_17_4096_ARB.BMP", "A8_18_4096_AGR.BMP", "A8_19_4096_AGB.BMP", "A8_20_4096_ABR.BMP", "A8_21_4096_ABG.BMP",
		"A8_22_4096_RAG.BMP", "A8_23_4096_RAB.BMP", "A8_24_4096_RGA.BMP", "A8_25_4096_RGB.BMP", "A8_26_4096_RBA.BMP", "A8_27_4096_RBG.BMP",
		"A8_28_4096_GAR.BMP", "A8_29_4096_GAB.BMP", "A8_30_4096_GRA.BMP", "A8_31_4096_GRB.BMP", "A8_32_4096_GBA.BMP", "A8_33_4096_GBR.BMP",
		"A8_34_4096_BAR.BMP", "A8_35_4096_BAG.BMP", "A8_36_4096_BRA.BMP", "A8_37_4096_BRG.BMP", "A8_38_4096_BGA.BMP", "A8_39_4096_BGR.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 8)
		{
			while (x < 8)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 192) b += 64;
				++x;
				a += 64;
			}
			if (b == 0) c += 64;
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name4096_8[i]);
	}
	bitmap.SetSize(64, 64);
	char name4096_64[][20] =
	{
		"A64_16_4096_ARG.BMP", "A64_17_4096_ARB.BMP", "A64_18_4096_AGR.BMP", "A64_19_4096_AGB.BMP", "A64_20_4096_ABR.BMP", "A64_21_4096_ABG.BMP",
		"A64_22_4096_RAG.BMP", "A64_23_4096_RAB.BMP", "A64_24_4096_RGA.BMP", "A64_25_4096_RGB.BMP", "A64_26_4096_RBA.BMP", "A64_27_4096_RBG.BMP",
		"A64_28_4096_GAR.BMP", "A64_29_4096_GAB.BMP", "A64_30_4096_GRA.BMP", "A64_31_4096_GRB.BMP", "A64_32_4096_GBA.BMP", "A64_33_4096_GBR.BMP",
		"A64_34_4096_BAR.BMP", "A64_35_4096_BAG.BMP", "A64_36_4096_BRA.BMP", "A64_37_4096_BRG.BMP", "A64_38_4096_BGA.BMP", "A64_39_4096_BGR.BMP",
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
				if (a == 240) b += 16;
				++x;
				a += 16;
			}
			if (b == 0) c += 16;
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name4096_64[i]);
	}
	bitmap.SetSize(512, 512);
	char name4096_512[][21] =
	{
		"A512_16_4096_ARG.BMP", "A512_17_4096_ARB.BMP", "A512_18_4096_AGR.BMP", "A512_19_4096_AGB.BMP", "A512_20_4096_ABR.BMP", "A512_21_4096_ABG.BMP",
		"A512_22_4096_RAG.BMP", "A512_23_4096_RAB.BMP", "A512_24_4096_RGA.BMP", "A512_25_4096_RGB.BMP", "A512_26_4096_RBA.BMP", "A512_27_4096_RBG.BMP",
		"A512_28_4096_GAR.BMP", "A512_29_4096_GAB.BMP", "A512_30_4096_GRA.BMP", "A512_31_4096_GRB.BMP", "A512_32_4096_GBA.BMP", "A512_33_4096_GBR.BMP",
		"A512_34_4096_BAR.BMP", "A512_35_4096_BAG.BMP", "A512_36_4096_BRA.BMP", "A512_37_4096_BRG.BMP", "A512_38_4096_BGA.BMP", "A512_39_4096_BGR.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 512)
		{
			while (x < 512)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 252) b += 4;
				++x;
				a += 4;
			}
			if (b == 0) c += 4;
			++y;
			x = 0;
		}
		bitmap.WriteToFile(name4096_512[i]);
	}
	bitmap.SetSize(4, 4);
	char name65536_4[][21] =
	{
		"A4_40_65536_ARGB.BMP", "A4_41_65536_ARBG.BMP", "A4_42_65536_AGRB.BMP", "A4_43_65536_AGBR.BMP", "A4_44_65536_ABRG.BMP", "A4_45_65536_ABGR.BMP",
		"A4_46_65536_RAGB.BMP", "A4_47_65536_RABG.BMP", "A4_48_65536_RGAB.BMP", "A4_49_65536_RGBA.BMP", "A4_50_65536_RBAG.BMP", "A4_51_65536_RBGA.BMP",
		"A4_52_65536_GARB.BMP", "A4_53_65536_GABR.BMP", "A4_54_65536_GRAB.BMP", "A4_55_65536_GRBA.BMP", "A4_56_65536_GBAR.BMP", "A4_57_65536_GBRA.BMP",
		"A4_58_65536_BARG.BMP", "A4_59_65536_BAGR.BMP", "A4_60_65536_BRAG.BMP", "A4_61_65536_BRGA.BMP", "A4_62_65536_BGAR.BMP", "A4_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 4)
		{
			while (x < 4)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 128) b += 128;
				++x;
				a += 128;
			}
			b = 0;
			if (c == 128) d += 128;
			++y;
			c += 128;
			x = 0;
		}
		bitmap.WriteToFile(name65536_4[i]);
	}
	bitmap.SetSize(16, 16);
	char name65536_16[][22] =
	{
		"A16_40_65536_ARGB.BMP", "A16_41_65536_ARBG.BMP", "A16_42_65536_AGRB.BMP", "A16_43_65536_AGBR.BMP", "A16_44_65536_ABRG.BMP", "A16_45_65536_ABGR.BMP",
		"A16_46_65536_RAGB.BMP", "A16_47_65536_RABG.BMP", "A16_48_65536_RGAB.BMP", "A16_49_65536_RGBA.BMP", "A16_50_65536_RBAG.BMP", "A16_51_65536_RBGA.BMP",
		"A16_52_65536_GARB.BMP", "A16_53_65536_GABR.BMP", "A16_54_65536_GRAB.BMP", "A16_55_65536_GRBA.BMP", "A16_56_65536_GBAR.BMP", "A16_57_65536_GBRA.BMP",
		"A16_58_65536_BARG.BMP", "A16_59_65536_BAGR.BMP", "A16_60_65536_BRAG.BMP", "A16_61_65536_BRGA.BMP", "A16_62_65536_BGAR.BMP", "A16_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 16)
		{
			while (x < 16)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 192) b += 64;
				++x;
				a += 64;
			}
			b = 0;
			if (c == 192) d += 64;
			++y;
			c += 64;
			x = 0;
		}
		bitmap.WriteToFile(name65536_16[i]);
	}
	bitmap.SetSize(64, 64);
	char name65536_64[][22] =
	{
		"A64_40_65536_ARGB.BMP", "A64_41_65536_ARBG.BMP", "A64_42_65536_AGRB.BMP", "A64_43_65536_AGBR.BMP", "A64_44_65536_ABRG.BMP", "A64_45_65536_ABGR.BMP",
		"A64_46_65536_RAGB.BMP", "A64_47_65536_RABG.BMP", "A64_48_65536_RGAB.BMP", "A64_49_65536_RGBA.BMP", "A64_50_65536_RBAG.BMP", "A64_51_65536_RBGA.BMP",
		"A64_52_65536_GARB.BMP", "A64_53_65536_GABR.BMP", "A64_54_65536_GRAB.BMP", "A64_55_65536_GRBA.BMP", "A64_56_65536_GBAR.BMP", "A64_57_65536_GBRA.BMP",
		"A64_58_65536_BARG.BMP", "A64_59_65536_BAGR.BMP", "A64_60_65536_BRAG.BMP", "A64_61_65536_BRGA.BMP", "A64_62_65536_BGAR.BMP", "A64_63_65536_BGRA.BMP",
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
				if (a == 224) b += 32;
				++x;
				a += 32;
			}
			b = 0;
			if (c == 224) d += 32;
			++y;
			c += 32;
			x = 0;
		}
		bitmap.WriteToFile(name65536_64[i]);
	}
	bitmap.SetSize(256, 256);
	char name65536_256[][23] =
	{
		"A256_40_65536_ARGB.BMP", "A256_41_65536_ARBG.BMP", "A256_42_65536_AGRB.BMP", "A256_43_65536_AGBR.BMP", "A256_44_65536_ABRG.BMP", "A256_45_65536_ABGR.BMP",
		"A256_46_65536_RAGB.BMP", "A256_47_65536_RABG.BMP", "A256_48_65536_RGAB.BMP", "A256_49_65536_RGBA.BMP", "A256_50_65536_RBAG.BMP", "A256_51_65536_RBGA.BMP",
		"A256_52_65536_GARB.BMP", "A256_53_65536_GABR.BMP", "A256_54_65536_GRAB.BMP", "A256_55_65536_GRBA.BMP", "A256_56_65536_GBAR.BMP", "A256_57_65536_GBRA.BMP",
		"A256_58_65536_BARG.BMP", "A256_59_65536_BAGR.BMP", "A256_60_65536_BRAG.BMP", "A256_61_65536_BRGA.BMP", "A256_62_65536_BGAR.BMP", "A256_63_65536_BGRA.BMP",
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
				if (a == 240) b += 16;
				++x;
				a += 16;
			}
			b = 0;
			if (c == 240) d += 16;
			++y;
			c += 16;
			x = 0;
		}
		bitmap.WriteToFile(name65536_256[i]);
	}
	bitmap.SetSize(1024, 1024);
	char name65536_1024[][24] =
	{
		"A1024_40_65536_ARGB.BMP", "A1024_41_65536_ARBG.BMP", "A1024_42_65536_AGRB.BMP", "A1024_43_65536_AGBR.BMP", "A1024_44_65536_ABRG.BMP", "A1024_45_65536_ABGR.BMP",
		"A1024_46_65536_RAGB.BMP", "A1024_47_65536_RABG.BMP", "A1024_48_65536_RGAB.BMP", "A1024_49_65536_RGBA.BMP", "A1024_50_65536_RBAG.BMP", "A1024_51_65536_RBGA.BMP",
		"A1024_52_65536_GARB.BMP", "A1024_53_65536_GABR.BMP", "A1024_54_65536_GRAB.BMP", "A1024_55_65536_GRBA.BMP", "A1024_56_65536_GBAR.BMP", "A1024_57_65536_GBRA.BMP",
		"A1024_58_65536_BARG.BMP", "A1024_59_65536_BAGR.BMP", "A1024_60_65536_BRAG.BMP", "A1024_61_65536_BRGA.BMP", "A1024_62_65536_BGAR.BMP", "A1024_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 1024)
		{
			while (x < 1024)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 248) b += 8;
				++x;
				a += 8;
			}
			b = 0;
			if (c == 248) d += 8;
			++y;
			c += 8;
			x = 0;
		}
		bitmap.WriteToFile(name65536_1024[i]);
	}
	bitmap.SetSize(4096, 4096);
	char name65536_4096[][24] =
	{
		"A4096_40_65536_ARGB.BMP", "A4096_41_65536_ARBG.BMP", "A4096_42_65536_AGRB.BMP", "A4096_43_65536_AGBR.BMP", "A4096_44_65536_ABRG.BMP", "A4096_45_65536_ABGR.BMP",
		"A4096_46_65536_RAGB.BMP", "A4096_47_65536_RABG.BMP", "A4096_48_65536_RGAB.BMP", "A4096_49_65536_RGBA.BMP", "A4096_50_65536_RBAG.BMP", "A4096_51_65536_RBGA.BMP",
		"A4096_52_65536_GARB.BMP", "A4096_53_65536_GABR.BMP", "A4096_54_65536_GRAB.BMP", "A4096_55_65536_GRBA.BMP", "A4096_56_65536_GBAR.BMP", "A4096_57_65536_GBRA.BMP",
		"A4096_58_65536_BARG.BMP", "A4096_59_65536_BAGR.BMP", "A4096_60_65536_BRAG.BMP", "A4096_61_65536_BRGA.BMP", "A4096_62_65536_BGAR.BMP", "A4096_63_65536_BGRA.BMP",
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
				if (a == 252) b += 4;
				++x;
				a += 4;
			}
			b = 0;
			if (c == 252) d += 4;
			++y;
			c += 4;
			x = 0;
		}
		bitmap.WriteToFile(name65536_4096[i]);
	}
	bitmap.SetSize(16384, 16384);
	char name65536_16384[][25] =
	{
		"A16384_40_65536_ARGB.BMP", "A16384_41_65536_ARBG.BMP", "A16384_42_65536_AGRB.BMP", "A16384_43_65536_AGBR.BMP", "A16384_44_65536_ABRG.BMP", "A16384_45_65536_ABGR.BMP",
		"A16384_46_65536_RAGB.BMP", "A16384_47_65536_RABG.BMP", "A16384_48_65536_RGAB.BMP", "A16384_49_65536_RGBA.BMP", "A16384_50_65536_RBAG.BMP", "A16384_51_65536_RBGA.BMP",
		"A16384_52_65536_GARB.BMP", "A16384_53_65536_GABR.BMP", "A16384_54_65536_GRAB.BMP", "A16384_55_65536_GRBA.BMP", "A16384_56_65536_GBAR.BMP", "A16384_57_65536_GBRA.BMP",
		"A16384_58_65536_BARG.BMP", "A16384_59_65536_BAGR.BMP", "A16384_60_65536_BRAG.BMP", "A16384_61_65536_BRGA.BMP", "A16384_62_65536_BGAR.BMP", "A16384_63_65536_BGRA.BMP",
	};
	for (uint8_t i = 0; i < 24; ++i)
	{
		x = 0; y = 0; a = 0; b = 0; c = 0; d = 0;
		while (y < 16384)
		{
			while (x < 16384)
			{
				bitmap(x, y)->Alpha = *ch4096_65536[i][0];
				bitmap(x, y)->Red = *ch4096_65536[i][1];
				bitmap(x, y)->Green = *ch4096_65536[i][2];
				bitmap(x, y)->Blue = *ch4096_65536[i][3];
				if (a == 254) b += 2;
				++x;
				a += 2;
			}
			b = 0;
			if (c == 254) d += 2;
			++y;
			c += 2;
			x = 0;
		}
		bitmap.WriteToFile(name65536_16384[i]);
	}
	return 0;
}*/