#include <iostream>
#include <iomanip>
using namespace std;

int n,fn=0,f0=1,f1=1;

int calac(int n){
    while(f1+f0<n){
        fn= f1 + f0;
        cout << fn << " ";
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main(){
    cout << "***Fibonanci Calculator***\n";
    cout << "Input Number: ";
    cin >> n;
    cout << "1 1 ";
    calac(n);
    return 0;
}
