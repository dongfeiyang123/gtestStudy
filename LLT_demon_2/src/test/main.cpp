#include <iostream>

#include "gtest/gtest.h"
#include <mockcpp/mockcpp.hpp>
#include "frame/frame.h"

inline unsigned int mok_sleep(unsigned int seconds) {
    std::cout << "running mok_sleep" << std::endl;
}

class FooEnvironment : public testing::Environment
{
public:
    void SetUp() override {
        MOCKER(sleep).stubs().will(invoke(mok_sleep));
    }

    void TearDown() {
    }
};

TEST(TestAdd, TestCase1)
{
    EXPECT_EQ(5, Frameuitl::add(2, 3));
}

TEST(TestAdd, TestCase2)
{
    MOCKER(sleep).stubs().will(invoke(mok_sleep));
    EXPECT_EQ(5, Frameuitl::add(2, 3));
    GlobalMockObject::verify(); // 用来清理case中的Mock函数，如果不调用，这个Mock函数在整个cpp中都生效
}

int main(int argc, char **argv)
{
	std::cout << "gtest begin.." << std::endl;
    // testing::AddGlobalTestEnvironment(new FooEnvironment());
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}