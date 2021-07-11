#include"Triangle.h"
#include<gtest/gtest.h>

TEST(Triangle, EmptyConstructor)
{
    Triangle t;
    EXPECT_EQ(1,t.m_a);
    EXPECT_EQ(1, t.m_b); 
    EXPECT_EQ(1, t.m_c);
}
TEST(Triangle, ParamConstructor)
{
    Triangle (7,10,5);
    EXPECT_EQ(7,t.m_a);
    EXPECT_EQ(10, t.m_b); 
    EXPECT_EQ(5, t.m_c);
}
TEST(Triangle, AreaTest)
{
    Triangle (7,9,5);
    EXPECT_EQ(10.5,t.area);
    
}
TEST(Triangle, CircumTest)
{
    Triangle (7,9,5);
    EXPECT_EQ(21.0,t.area);
    
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}