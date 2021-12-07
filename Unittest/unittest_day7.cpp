#include "pch.h"
#include <string>
#include "../AoC2021/Crabs.hpp"
#include "../AoC2021/Crabs.cpp"

TEST(Day7, Crabs_test)
{
	size_t input[] = {
		16,1,2,0,4,2,7,1,2,14
	};
	std::vector<size_t> inp(std::begin(input), std::end(input));

	Crabs crabs;
	crabs.input(inp);

	EXPECT_EQ(crabs.moveToPosition(1), 41);
	EXPECT_EQ(crabs.moveToPosition(2), 37);
	EXPECT_EQ(crabs.moveToPosition(3), 39);
	EXPECT_EQ(crabs.moveToPosition(10), 71);
	EXPECT_EQ(crabs.getBestFuelCalc(), 37);

	EXPECT_EQ(crabs.moveToPosition(5,true), 168);
	EXPECT_EQ(crabs.moveToPosition(2,true), 206);
}
