#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    /*cout << "input a,b :" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    swap(a,b);
    cout << "a:" << a << " " << "b:" << b;*/
    cout << "Min(" << a << ", " << b << ") = " << min(a, b) << endl;
	cout << "Min(10, 20, 15, 4) = " << min({10, 20, 15, 4}) << endl;
	cout << "Min('d', 'b', 'z',) = " << min({'d', 'b', 'z'}) << endl;
	cout << "Max(" << a << ", " << b << ") = " << max(a, b) << endl;
	cout << "Max(10, 20, 15, 4) = " << max({10, 20, 15, 4}) << endl;
	cout << "Max('d', 'b', 'z',) = " << max({'d', 'b', 'z'}) << endl;
    return 0;
}
