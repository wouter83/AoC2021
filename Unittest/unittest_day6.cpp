#include "pch.h"
#include <string>
#include "../AoC2021/Lanternfish.hpp"
#include "../AoC2021/Lanternfish.cpp"

TEST(Day6, FishesTest)
{
	size_t input[] = {
		3,4,3,1,2
	};
	std::vector<size_t> inp(std::begin(input), std::end(input));

	LanternfishSwarm lf;
	lf.input(inp);

	EXPECT_EQ(lf.parse(18), 26);
	EXPECT_EQ(lf.parse(80 - 18), 5934); 
	EXPECT_EQ(lf.parse(256 -80), 26984457539);
}

