// AoC2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inputs.hpp"
#include <crtdbg.h>

#include "DepthMeassurment.hpp"
#include "SubMarine.hpp"
#include "BinaryDiagnostic.hpp"
#include "BingoBoard.hpp"
#include "HydrothermalVents.hpp"
#include "Lanternfish.hpp"


int main()
{    
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
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

    {
        std::cout << "--- Day 05 ---" << std::endl;
        HydrothermalVents hv;
        std::vector<std::string> inp(std::begin(day5Input), std::end(day5Input));
        hv.input(inp);
        std::cout << "Answer 1: " << hv.overlap(2) << std::endl;
        
        HydrothermalVents hv1;
        hv1.input(inp,true);

        std::cout << "Answer 2: " << hv1.overlap(2) << std::endl;
    }

    {
        std::cout << "--- Day 06 ---" << std::endl;
        LanternfishSwarm LF;
        std::vector<size_t> inp(std::begin(day6Input), std::end(day6Input));
        LF.input(inp);
        std::cout << "Answer 1: " << LF.parse(80) << std::endl;
        std::cout << "Answer 2: " << LF.parse(256-80) << std::endl;

    }
}
 