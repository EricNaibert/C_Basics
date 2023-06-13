#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int main() {

    double a, b, c;

    cout << "Enter side A: " << '\n';
    cin >> a;

    cout << "Enter side B: " << std::endl;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("The size of the C side is: %.2f", c);

    return 0;
}