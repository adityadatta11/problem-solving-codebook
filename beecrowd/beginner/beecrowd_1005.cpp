#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b, average;
    cin >> a >> b;
    average = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;
    return 0;
}