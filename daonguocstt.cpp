#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    long long n, i,so=0;
    cout << "input a number: ";
    cin >> n;
    cout << "filp number: ";
    while(abs(n)>0)
    {
        so=so*10;
        i=n %10;
        n=n/10;
        so=so+i;
    }
cout<<so;
    return 0;
}
