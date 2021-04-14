#include <iostream>
#include "gtest/gtest.h"
#include "frame/frame.h"

TEST(TestAdd, TestCase1)
{
    EXPECT_EQ(5, Frameuitl::add(2, 3));
}

TEST(TestAdd, TestCase2)
{
    EXPECT_EQ(6, Frameuitl::add(2, 3));
}

int main(int argc, char **argv)
{
	std::cout << "gtest begin.." << std::endl;
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}