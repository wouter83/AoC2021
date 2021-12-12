#include "pch.h"
#include <string>
#include "../AoC2021/LowPoints.hpp"
#include "../AoC2021/LowPoints.cpp"

TEST(Day9, Low_points)
{
	std::string input[] = {
		"2199943210",
		"3987894921",
		"9856789892",
		"8767896789",
		"9899965678",
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));

	LowPoints lp;
	lp.input(inp);

	EXPECT_EQ(lp.riskPoints(), 15);
	EXPECT_EQ(lp.bassins(), 1134);
}

TEST(Day9, Low_points_corners)
{
	std::string input[] = {
"01234543210",
"12345654321",
"23456765432",
"34567876543",
"45678987654",
"56789998765",
"45678987654",
"34567876543",
"23456765432",
"12345654321",
"01234543210",
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));

	LowPoints lp;
	lp.input(inp);

	EXPECT_EQ(lp.riskPoints(), 4);
	//EXPECT_EQ(seven.OutputTotal(), 5353);
}
