#include "gtest/gtest.h"

struct SampleTest : public ::testing::Test {
	inline void SetUp() override {}
	inline void TearDown() override {}
};

TEST_F(SampleTest, XXX) {
	ASSERT_TRUE(false);
}

