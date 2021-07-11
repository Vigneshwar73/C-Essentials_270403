#include"Box.h"
#include<gtest/gtest.h>

TEST(Box, EmptyConstructor)
{
    Box b1;
    EXPECT_EQ(0.0, b1.length());
    EXPECT_EQ(0.0, b1.breadth());
    EXPECT_EQ(0.0, b1.height());
    EXPECT_EQ(0.0, b1.volume());
}
TEST(Box, ParamConstructor)
{
    Box b1(6.0,7.0,8.0);
    EXPECT_EQ(6.0, b1.length());
    EXPECT_EQ(7.0, b1.breadth());
    EXPECT_EQ(8.0, b1.height());
    EXPECT_EQ(336.0, b1.volume());
}
TEST(Box, SameParamConstructor)
{
    Box b1(6.0);
    EXPECT_EQ(6.0, b1.length());
    EXPECT_EQ(6.0, b1.breadth());
    EXPECT_EQ(6.0, b1.height());
    EXPECT_EQ(216.0, b1.volume());
}
TEST(Box, CopyConstructor)
{
    Box b1(5.0,6.0,7.0);
    Box b2(b1);
    EXPECT_EQ(5.0, b2.length());
    EXPECT_EQ(6.0, b2.breadth());
    EXPECT_EQ(7.0, b2.height());
    EXPECT_EQ(210.0, b2.volume());
}
TEST(Box, volumeTest)
{
    Box b1(6.0);
    EXPECT_EQ(216.0,b1.volume();)
}
TEST(Box, heightTest)
{
    Box b1(6.0);
    EXPECT_EQ(216.0,b1.height();)
}
TEST(Box, LengthTest)
{
    Box b1(6.0);
    EXPECT_EQ(216.0,b1.length();)
}
TEST(Box, breadthTest)
{
    Box b1(6.0);
    EXPECT_EQ(216.0,b1.breadth();)
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
