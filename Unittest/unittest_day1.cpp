#include "pch.h"
#include "../AoC2021/DepthMeassurment.h"
#include "../AoC2021/DepthMeassurment.cpp"

TEST(Day1, increased)
{
	unsigned int input[] = {
		199,
		200,
		208,
		210,
		200,
		207,
		240,
		269,
		260,
		263,
	};
	DepthMeassurment meassurment;
	std::vector<unsigned int> inputV(std::begin(input), std::end(input));
	meassurment.input(inputV);
	EXPECT_EQ(meassurment.increaseCount(), 7u);
	EXPECT_EQ(meassurment.threeSlideCount(), 5u);
}