
#include "point.h"
#include<gtest/gtest.h>
namespace{
    TEST(Point,Origin){
        Point p1(0,0);
        EXPECT_EQ(true, p1.isOnOrigin());

    }

    TEST(Point,Xaxis){
        Point p1(7,0);
        EXPECT_EQ(true, p1.isOnXAxis());

    }

    TEST(Point,Yaxis){
        Point p1(0,7);
        EXPECT_EQ(true, p1.isOnYAxis());

    }

    TEST(Point,Quad){
        Point p1(2,3);
        EXPECT_EQ(Q1, p1.quadrant());

    }


}