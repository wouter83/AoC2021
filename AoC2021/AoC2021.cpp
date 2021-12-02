// AoC2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inputs.hpp"

#include "DepthMeassurment.hpp"
#include "SubMarine.hpp"

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
}
