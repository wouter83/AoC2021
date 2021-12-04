#pragma once
#include <vector>
#include <string>

struct BingoNumber {
	BingoNumber(uint32_t val) { number = val; }
	uint32_t number;
	bool drawn = false;
};

class BingoBoard
{
public:
	void input(std::vector<std::string> input);

private:
	std::vector<uint32_t> mNumbersDrawn;
	
};

