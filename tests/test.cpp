#include <gtest/gtest.h>
#include "../MyMathLib.h"  // Ensure correct relative path from 'tests/' folder

TEST(MathTestCase, MathTestSqrt9)
{
    ASSERT_EQ(3, mySqrt(9));
}
