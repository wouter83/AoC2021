#include "pch.h"
#include <string>
#include "../AoC2021/BinaryDiagnostic.hpp"
#include "../AoC2021/BinaryDiagnostic.cpp"


TEST(Day3, Binary_Diagnostics)
{
	std::string input[] = {
		"00100",
		"11110",
		"10110",
		"10111",
		"10101",
		"01111",
		"00111",
		"11100",
		"10000",
		"11001",
		"00010",
		"01010",
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));

	BinaryDiagnostic bd;
	bd.input(inp);
	EXPECT_EQ(bd.powerConsumption(), 198);
	EXPECT_EQ(bd.lifeSupportRating(), 230);
}