// AoC2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inputs.hpp"

#include "DepthMeassurment.hpp"
#include "SubMarine.hpp"
#include "BinaryDiagnostic.hpp"
#include "BingoBoard.hpp"

int main()
{    
    {
        std::cout << "--- Day 01 ---" << std::endl;
        DepthMeassurment dm;
        std::vector<unsigned int> inp(std::begin(day1Input), std::end(day1Input));
        dm.input(inp);
        std::cout << "Answer 1: " << dm.increaseCount() << std::endl;
        std::cout << "Answer 2: " << dm.threeSlideCount() << std::endl;
    }

    {
        std::cout << "--- Day 02 ---" << std::endl;
        SubMarine sub;
        std::vector<std::string> inp(std::begin(day2Input), std::end(day2Input));
        sub.input(inp);
        std::cout << "Answer 1: " << sub.HorDepth() << std::endl;
        std::cout << "Answer 2: " << sub.HorDepthAim() << std::endl;
    }

    {
        std::cout << "--- Day 03 ---" << std::endl;
        BinaryDiagnostic bd;
        std::vector<std::string> inp(std::begin(day3Input), std::end(day3Input));
        bd.input(inp);
        std::cout << "Answer 1: " << bd.powerConsumption() << std::endl;
        std::cout << "Answer 2: " << bd.lifeSupportRating() << std::endl;
    }

    {
        std::cout << "--- Day 04 ---" << std::endl;
        BingoBoard bb;
        std::vector<std::string> inp(std::begin(day4Input), std::end(day4Input));
        bb.input(inp);
        std::cout << "Answer 1: " << bb.getBingoAnswerBest() << std::endl;
        std::cout << "Answer 2: " << bb.getBingoAnswerWorst() << std::endl;
    }
}
 