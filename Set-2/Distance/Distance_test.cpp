#include"Distance.h"
#include<gtest/gtest.h>

TEST(Distance, EmptyConstructor)
{
    Distance d;
    EXPECT_EQ(0, d.m_feets);
    EXPECT_EQ(0, d.m_inches);
    
}
TEST(Distance, ParamConstructor)
{
    Distance d(5,3);
    EXPECT_EQ(5, d.m_feets);
    EXPECT_EQ(3, d.m_inches);
    
}

TEST(Distance, SignleParamConstructor)
{
    Distance d(5);
    EXPECT_EQ(5, d.m_feets);
    EXPECT_EQ(5, d.m_inches);
    
}
TEST(Distance, PlusOperatorOverload)
{
    Distance d1(6,2);
    Distance d2(5,3);
    Distance d3 = d1+d2;
    EXPECT_EQ(11, d3.m_feets);
    EXPECT_EQ(5, d3.m_inches);
    
}

TEST(Distance, MinusOperatorOverload)
{
    Distance d1(6,5);
    Distance d2(5,3);
    Distance d3 = d1-d2;
    EXPECT_EQ(1, d3.m_feets);
    EXPECT_EQ(2, d3.m_inches);
    
}

TEST(Distance, PlusIntOverload)
{
    Distance d1(6,5);
    Distance d2 = d1+2;
    EXPECT_EQ(8, d3.m_feets);
    EXPECT_EQ(5, d3.m_inches);
    
}
TEST(Distance, MinusIntOverload)
{
    Distance d1(6,5);
    Distance d2 = d1-2;
    EXPECT_EQ(4, d3.m_feets);
    EXPECT_EQ(5, d3.m_inches);
    
}
TEST(Distance, IncrementOperatorOverload)
{
    Distance d1(6,5);
    Distance d3 = d1++;
    EXPECT_EQ(7, d3.m_feets);
    EXPECT_EQ(5, d3.m_inches);
    
}
TEST(Distance, IncrementIntOverload)
{
    Distance d1(6,5);
    Distance d3 = d1++3;
    EXPECT_EQ(9, d3.m_feets);
    EXPECT_EQ(5, d3.m_inches);
    
}
TEST(Distance, EqualOperatorOverload)
{
    Distance d1(6,5);
    Distance d2(6,5);
    EXPECT_EQ(true, d1==d2);
        
}
TEST(Distance, LessThanOperatorOverload)
{
    Distance d1(4,5);
    Distance d2(5,5);
    EXPECT_EQ(true, d1<d2);
        
}
TEST(Distance, GreaterThanOperatorOverload)
{
    Distance d1(6,5);
    Distance d2(5,5);
    EXPECT_EQ(true, d1>d2);
        
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}