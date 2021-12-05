#pragma once

#include <vector>
#include <string>

struct Point
{
	Point(int valX, int valY) : x(valX), y(valY) {}
	constexpr bool operator==(const Point& p)
	{
		return (x == p.x && y == p.y);
	}
	int  x = 0;
	int  y = 0;
};

struct OpaqueCloud
{	
	OpaqueCloud(Point p) : point(p) {}

	Point point;
	int strength = 0;
};

class HydrothermalVents
{
public:
	void input(std::vector<std::string> input, bool diagonal = false);
	int overlap(int amount);

private:
	std::vector<OpaqueCloud*> mClouds;
};

