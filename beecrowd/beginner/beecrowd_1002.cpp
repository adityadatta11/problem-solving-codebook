#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

int main() {
    double r, a;
    std::cin >> r;
    a = PI * pow(r, 2);
    std::cout << "A=" << std::fixed << std::setprecision(4) << a << std::endl;
    return 0;
}