#include <iostream>
#include <iomanip>
using namespace std;

int n;

void calac(int n){
    int k=0,l=0;
    for(int i=1;i<=n;i++)
    if(n % i == 0){
        k++;
        l = l + i;
    }
    cout << "So uoc la: " << k << endl;
    cout << "So tong uoc la: " << l;
}

int main(){
    cout << "***Tinh Uoc So Program***\n";
    cout << "Input Number: ";
    cin >> n;
    calac(n);
//ver:
    //cout << "ver:1.0";
    return 0;
}
