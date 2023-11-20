#include <iostream>
#include <iomanip>

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    std::cin >> i >> l >> c >> f >> d;

    std::cout << i << std::endl
              << l << std::endl
              << c << std::endl
              << std::fixed << std::setprecision(2) << f << std::endl
              << std::fixed << std::setprecision(5) << d << std::endl;

    return 0;
}