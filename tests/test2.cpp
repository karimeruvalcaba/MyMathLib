#include <gtest/gtest.h>
#include "../KarimeMathLib2.h" 

TEST(KarimeMathLib2Test, FactorialTest)
{
    KarimeMathLib2 mathLib2;
    ASSERT_EQ(mathLib2.my_factorial(5), 120);
}

TEST(KarimeMathLib2Test, CombinationTest)
{
    KarimeMathLib2 mathLib2;
    ASSERT_EQ(mathLib2.combination(5, 2), 10);
}

TEST(KarimeMathLib2Test, FactorialNegative)
{
    KarimeMathLib2 mathLib2;
    ASSERT_THROW(mathLib2.my_factorial(-1), invalid_argument);
}

TEST(KarimeMathLib2Test, CombinationInvalid)
{
    KarimeMathLib2 mathLib2;
    ASSERT_THROW(mathLib2.combination(3, 5), invalid_argument);
}
