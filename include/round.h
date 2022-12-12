#include <iostream>
#include <cmath>

namespace math {
    double rounds(double zahl, double stellen) {
        const int zehner = pow(10, stellen); 
        return round(zahl * zehner) / zehner; 
    }
}