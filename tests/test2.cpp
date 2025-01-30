#include <gtest/gtest.h>
#include "../KarimeMathLib2.h" 

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLib2Test, FactorialTest)
{
    KarimeMathLib2 mathLib2;
    ASSERT_EQ(mathLib2.my_factorial(5), 120);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLib2Test, CombinationTest)
{
    KarimeMathLib2 mathLib2;
    ASSERT_EQ(mathLib2.my_combination(5, 2), 10);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLib2Test, FactorialNegative)
{
    KarimeMathLib2 mathLib2;
    ASSERT_THROW(mathLib2.my_factorial(-1), invalid_argument);
}

// NOSONAR: GTest macros do not follow lowercase naming convention
TEST(KarimeMathLib2Test, CombinationInvalid)
{
    KarimeMathLib2 mathLib2;
    ASSERT_THROW(mathLib2.my_combination(3, 5), invalid_argument);
}
