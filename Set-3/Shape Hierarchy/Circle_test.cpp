#include"Circle.h"
#include<gtest/gtest.h>

TEST(Circle, EmptyConstructor)
{
    Circle c;
    EXPECT_EQ(1, c.m_radius);
        
}
TEST(Circle, ParamConstructor)
{
    Circle c(3);
    EXPECT_EQ(3, c.m_radius);
        
}
TEST(Circle, AreaTest)
{
    Circle c(7);
    EXPECT_EQ(539.0, c.area());
        
}
TEST(Circle, CircumTest)
{
    Circle c(7);
    EXPECT_EQ(44.0, c.circumference());
        
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}