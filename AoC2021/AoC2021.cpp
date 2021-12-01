// AoC2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inputs.h"

#include "DepthMeassurment.h"

int main()
{    
    std::cout << "--- Day 01 ---" << std::endl;
    DepthMeassurment dm;
    std::vector<unsigned int> inp1(std::begin(day1Input), std::end(day1Input));
    dm.input(inp1);
    std::cout << "Answer 1: " << dm.increaseCount() << std::endl;
    std::cout << "Answer 2: " << dm.threeSlideCount() << std::endl;
}
