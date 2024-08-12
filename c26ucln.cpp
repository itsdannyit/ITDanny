#include <iostream>
#include <iomanip>
using namespace std;

int a,b;

int calac(int a,int b){
    int gcd = 1;
    int i;
    if(a < b){
        i = a;
    }
    else{
        i = b;
    }
    while(i>1) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
        --i;
    }

    return gcd;
}

int main(){
    cout << "***UCLN CAL***" << endl;
    cout << "Ver 1.0" << endl;
    cout << "Input a b: ";
    cin >> a >> b;
    cout << calac(a,b);
    return 0;
}
