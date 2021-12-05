#include "pch.h"
#include <string>
#include "../AoC2021/HydrothermalVents.hpp"
#include "../AoC2021/HydrothermalVents.cpp"

TEST(Day5, Hydrothermal_Venture_HV)
{
	std::string input[] = {
		"0,9 -> 5,9",
		"8,0 -> 0,8",
		"9,4 -> 3,4",
		"2,2 -> 2,1",
		"7,0 -> 7,4",
		"6,4 -> 2,0",
		"0,9 -> 2,9",
		"3,4 -> 1,4",
		"0,0 -> 8,8",
		"5,5 -> 8,2",
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));
	HydrothermalVents hv;
	hv.input(inp);


	EXPECT_EQ(hv.overlap(2), 5);
	//EXPECT_EQ(hv.(), 1924);
}

TEST(Day5, Hydrothermal_Venture_HVD)
{
	std::string input[] = {
		"0,9 -> 5,9",
		"8,0 -> 0,8",
		"9,4 -> 3,4",
		"2,2 -> 2,1",
		"7,0 -> 7,4",
		"6,4 -> 2,0",
		"0,9 -> 2,9",
		"3,4 -> 1,4",
		"0,0 -> 8,8",
		"5,5 -> 8,2",
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));
	HydrothermalVents hv;
	hv.input(inp, true);


	EXPECT_EQ(hv.overlap(2), 12);
	
}