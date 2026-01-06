#include <iostream>
#include <cmath>
using namespace std;
/*
 * Function: power
 * ----------------
 * Computes x raised to the power n (x^n)
 *
 * Parameters:
 *  x : base value (double)
 *  n : exponent value (integer)
 *
 * Returns:
 *  The result of x raised to the power n
 */
int main() {
    double x = 2.0;
    int n = 5;
    double result = pow(x, n);
    cout << x << "^" << n << " = " << result;
    return 0;
}
