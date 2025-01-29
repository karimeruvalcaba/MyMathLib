#include <iostream>
#include "MyMathLib.h"
#include "KarimeMathLib.h"
#include "KarimeMathLib2.h"

using namespace std;

int main()
{
    KarimeMathLib mathLib;
    KarimeMathLib2 mathLib2;
    cout << "Hello World!\n";
    cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    cout << "Suma: " << mathLib.my_sum(5, 5) << endl;
    cout << "Resta: " << mathLib.my_difference(10, 5) << endl;
    cout << "Multiplicación: " << mathLib.my_multiplication(5, 5) << endl;
    cout << "División: " << mathLib.my_division(5, 5) << endl;
    cout << "Factorial: " << mathLib2.my_factorial(5) << endl;
    cout << "Combinación: " << mathLib2.my_combination(5, 3) << endl;
}