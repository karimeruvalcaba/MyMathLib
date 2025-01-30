#include <gtest/gtest.h>
#include "../KarimeMathLib.h"  

using namespace std; 

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLibTest, SumTest)
{
    KarimeMathLib mathLib;
    ASSERT_EQ(mathLib.my_sum(5, 5), 10);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLibTest, DifferenceTest)
{
    KarimeMathLib mathLib;
    ASSERT_EQ(mathLib.my_difference(10, 5), 5);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLibTest, MultiplicationTest)
{
    KarimeMathLib mathLib;
    ASSERT_EQ(mathLib.my_multiplication(5, 5), 25);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLibTest, DivisionTest)
{
    KarimeMathLib mathLib;
    ASSERT_EQ(mathLib.my_division(5, 5), 1);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLibTest, DivisionByZero)
{
    KarimeMathLib mathLib;
    ASSERT_THROW(mathLib.my_division(10, 0), invalid_argument);
}
