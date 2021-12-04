#include "BingoBoard.hpp"
#include "Generic.h"

void BingoBoard::input(std::vector<std::string> input)
{
	if (input.size() >= 1)
	{
		std::vector<std::string> inputnumbers = Generic::splitString(input[0], ",");
		for (auto num : inputnumbers)
		{
			mNumbersDrawn.push_back(std::strtol(num.c_str(), nullptr, 0));
		}
	}
	std::vector<BingoNumber> board;

	for (int i = 1; i < input.size(); ++i)
	{
		// parse the rest
		std::vector<std::string> boardNumbers = Generic::splitString(input[i], " ");

		for (auto num : boardNumbers)
		{
			board.push_back(std::strtol(num.c_str(), nullptr, 0));
		}

	}
	size_t boardCount = board.size() / 25;

	
}
