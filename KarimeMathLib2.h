#ifndef KarimeMathLib2_h
#define KarimeMathLib2_h

#include <stdexcept>
using namespace std;

class KarimeMathLib2{
    public:

    long long my_factorial(int x){
        if (x < 0){
            throw invalid_argument("Error: Factorial of a negative number is undefined");
        }
        long long result = 1;
        for (int i = 2; i <= x; ++i){
            result *= i;
        }
        return result;
    }

    long long my_combination(int x, int y){
        if (x < 0 || y < 0 || y > x){
            throw invalid_argument("Error: Invalid values for combination");
        }
        return my_factorial(x) / (my_factorial(y) * my_factorial(x - y));
    }
    

};

#endif // KarimeMathLib2_h
