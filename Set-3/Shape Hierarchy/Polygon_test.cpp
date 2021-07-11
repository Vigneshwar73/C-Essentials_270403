#include"Polygon.h"
#include<gtest/gtest.h>

TEST(Polygon, EmptyConstructor)
{
    Polygon p;
    EXPECT_EQ(3, p.m_sides);
       
}

TEST(Polygon, ParamConstructor)
{
    Polygon p(5);
    EXPECT_EQ(5, p.m_sides);
       
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}