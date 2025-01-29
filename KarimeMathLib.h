#ifndef KarimeMathLib_h
#define KarimeMathLib_h

#include <stdexcept>
using namespace std;

class KarimeMathLib{
    public:
    double my_sum(double x, double y){
    return x + y;
    }

    double my_difference(double x, double y){
        return x-y;
    }

    double my_multiplication(double x, double y){
        return x*y;
    }

    double my_division(double x, double y){
        if (y == 0){
            throw invalid_argument(" Error: Division by zero");
        }
        return x / y;
    }

};

#endif // KarimeMathLib_h
