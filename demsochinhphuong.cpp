#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int n;

int calac(int n){
    int i;
    i = sqrt(n);
    if(i * i == n){
        return 1;
    }
    return 0;
}

int main(){
    cout << "***SO CHINH PHUONG PROGARAM***\n";
    cout << "Version:1.0\n";
    cout << "Input Number: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    if(calac(i)==1){
    cout << i << setw(4);
    }
    return 0;
}
