#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int gcd = 1;
    int i;
    if (a < b) {
        i = a;
    } else {
        i = b;
    }
    while (i > 1) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
        --i;
    }

    return gcd;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); //gg
}

int main() {
    int a, b;
    cout << "***GCD and LCM CALCULATOR***" << endl;
    cout << "Version 1.0" << endl;
    cout << "Input a b: ";
    cin >> a >> b;

    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    return 0;
}
