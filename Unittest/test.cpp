#include "pch.h"
#include "Generic.h"
#include <string>
#include <vector>

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(GenericTest, SplitString)
{
	std::string input = "een twee  drie";
	std::vector<std::string> outp = Generic::splitString(input," ");
	ASSERT_EQ(outp.size(), 3);
	EXPECT_EQ(outp[0], "een");
	EXPECT_EQ(outp[1], "twee");
	EXPECT_EQ(outp[2], "drie");

}