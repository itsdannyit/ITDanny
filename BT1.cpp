#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a = 2, b = 10, n = 100, n2 = 27;
    double a2 = 3.14;
    double b2 = 3.8;
    cout << (int)ceil(a2) << " " << (int)ceil(b2) << endl;
    cout << (int)floor(a2) << " " << (int)floor(b2) << endl;
    cout << (int)round(a2) << " " << (int)round(b2) << endl;
    cout << abs(10) << " " << abs(-100) << endl;
    /*int can = (int)cbrt(n2);
    cout << can << endl;

    double res = cbrt(100);
    cout << fixed << setprecision(2) << res << endl;*/
    /*int can = (int)sqrt(n);
    cout << can << endl;

    double res = sqrt(1000);
    cout << fixed << setprecision(2) << res << endl;*/
    /*cout << a << "^" << b << " = " << (int)pow(a,b) << endl;
    int n = 100;
    double res = pow(n, 1.0 / 5);
    cout << fixed << setprecision(3) << res << endl;*/
    return 0;
}
