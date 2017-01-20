// unittest_SimpleMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "simplemath.h"

TEST(testMath, CubeReturns1000For10)
{
	EXPECT_EQ(1000, Cube(10));
}

TEST(testMath, CubeReturns125For5)
{
	EXPECT_EQ(125, Cube(5));
}

TEST(testMath, CubeThrowsExceptionFor0)
{
	EXPECT_THROW(Cube(0), std::string);
}

TEST(testMath, CubeThrowsAnyExceptionForMinus5)
{
	EXPECT_ANY_THROW(Cube(-5));
}