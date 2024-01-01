#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, average;
    cin >> a >> b >> c;
    average = (a * 2 + b * 3 + c * 5) / (2.0 + 3.0 + 5.0);
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;
    return 0;
}