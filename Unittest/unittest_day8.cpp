#include "pch.h"
#include <string>
#include "../AoC2021/SevenSegment.hpp"
#include "../AoC2021/SevenSegment.cpp"

TEST(Day8, Segements_small)
{
	std::string input[] = {
		"acedgfb cdfbe gcdfa fbcad dab cefabd cdfgeb eafb cagedb ab | cdfeb fcadb cdfeb cdbaf"
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));

	SevenSegment seven;
	seven.input(inp);

	EXPECT_EQ(seven.OneFourSevenEight(), 0);
	EXPECT_EQ(seven.OutputTotal(), 5353);
}

TEST(Day8, Segements_large)
{
	std::string input[] = {
		"be cfbegad cbdgef fgaecd cgeb fdcge agebfd fecdb fabcd edb | fdgacbe cefdb cefbgd gcbe",
		"edbfga begcd cbg gc gcadebf fbgde acbgfd abcde gfcbed gfec | fcgedb cgb dgebacf gc",
		"fgaebd cg bdaec gdafb agbcfd gdcbef bgcad gfac gcb cdgabef | cg cg fdcagb cbg",
		"fbegcd cbd adcefb dageb afcb bc aefdc ecdab fgdeca fcdbega | efabcd cedba gadfec cb",
		"aecbfdg fbg gf bafeg dbefa fcge gcbea fcaegb dgceab fcbdga | gecf egdcabf bgf bfgea",
		"fgeab ca afcebg bdacfeg cfaedg gcfdb baec bfadeg bafgc acf | gebdcfa ecba ca fadegcb",
		"dbcfg fgd bdegcaf fgec aegbdf ecdfab fbedc dacgb gdcebf gf | cefg dcbef fcge gbcadfe",
		"bdfegc cbegaf gecbf dfcage bdacg ed bedf ced adcbefg gebcd | ed bcgafe cdgba cbgef",
		"egadfb cdbfeg cegd fecab cgb gbdefca cg fgcdab egfdb bfceg | gbdfcae bgc cg cgb",
		"gcafb gcf dcaebfg ecagb gf abcdeg gaef cafbge fdbac fegbdc | fgae cfgab fg bagce"
	};
	std::vector<std::string> inp(std::begin(input), std::end(input));

	SevenSegment seven;
	seven.input(inp);

	EXPECT_EQ(seven.OneFourSevenEight(), 26);
	EXPECT_EQ(seven.OutputTotal(), 61229);
}
