#include <iostream>
#include <iomanip>
using namespace std;

int n;

int cal(int n){
    if (n<2)
    {
       return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
            if( n % i == 0) return 0;
    }
    return 1;
}

void calac(int n){
    int k=0,l=0;
    cout << "cac uoc: ";
    for(int i=1;i<=n;i++)
    if((n % i == 0) && (cal(i)==1)){
        k++;
        cout << i << setw(3);
    }
    cout << "\nSo uoc nguyen to: " << k;
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
