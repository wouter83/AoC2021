#include "pch.h"
#include <string>
#include "../AoC2021/SubMarine.hpp"
#include "../AoC2021/SubMarine.cpp"

TEST(Day2, Submarine)
{
	std::string input[] = {
		"forward 5",
		"down 5",
		"forward 8",
		"up 3",
		"down 8",
		"forward 2",
	};

	std::vector<std::string> inp2(std::begin(input), std::end(input));
	SubMarine sub;
	sub.input(inp2);
	EXPECT_EQ(sub.HorDepth(), 150);
	EXPECT_EQ(sub.HorDepthAim(), 900);
}