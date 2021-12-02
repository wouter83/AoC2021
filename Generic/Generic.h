#pragma once
#include <vector>
#include <string>

class Generic
{
public:
	static std::vector<std::string> splitString(const std::string& str, const std::string& seperator)
	{
		std::vector<std::string> ret;
		size_t pos = 0;// std::string::npos;
		while (1)
		{
			size_t seppPos = str.substr(pos).find(seperator);
			std::string substr = str.substr(pos, seppPos);
			if (!substr.empty())
			{
				ret.push_back(substr);
			}
			if (seppPos == std::string::npos)
			{
				break;
			}
			pos += seppPos + seperator.size();
		}
		return ret;
	}
};

