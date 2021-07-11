#include"Point.h"
#include<gtest/gtest.h>

TEST(Point, EmptyConstructor)
{
    Point p;
    EXPECT_EQ(0, p.m_x);
    EXPECT_EQ(0, p.m_y);
    
}
TEST(Point, IntConstructor)
{
    Point p(5,3);
    EXPECT_EQ(5, p.m_x);
    EXPECT_EQ(3, p.m_y);
    
}
TEST(Point, DoubleConstructor)
{
    Point p(5.7,3.6);
    EXPECT_EQ(5.7, p.m_x);
    EXPECT_EQ(3.6, p.m_y);
    
}
TEST(Point, FloatConstructor)
{
    Point p(2.3f,3.6f);
    EXPECT_EQ(2.3f, p.m_x);
    EXPECT_EQ(3.6f, p.m_y);
    
}
TEST(Point, QuadrantTest)
{
    Point p(5.7,3.6);
    EXPECT_EQ(Quadrant::Q1, p.quadrant());
    
    
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}