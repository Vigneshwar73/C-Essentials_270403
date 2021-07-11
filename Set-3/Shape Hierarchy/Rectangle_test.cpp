#include"Rectangle.h"
#include<gtest/gtest.h>

TEST(Rectangle, EmptyConstructor)
{
    Rectangle r;
    EXPECT_EQ(1, r.m_length);
    EXPECT_EQ(1, r.m_breadth); 
}
TEST(Rectangle, ParamConstructor)
{
    Rectangle r(5,3);
    EXPECT_EQ(5, r.m_length);
    EXPECT_EQ(3, r.m_breadth); 
}
TEST(Rectangle, AreaTest)
{
    Rectangle r(5,3);
    EXPECT_EQ(15.0, r.area());
    
}
TEST(Rectangle, CircumTest)
{
    Rectangle r(5,3);
    EXPECT_EQ(30.0, r.circumference());
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}