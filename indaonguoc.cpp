#include <iostream>
#include <iomanip>
using namespace std;

int n,so=0,ans;

int calac(int n){
    while(n>0){
        ans = n % 10;
        so = so * 10 + ans;
        n = n / 10;
    }
    return so;
}

int main(){
    cout << "***Number Reverse Program***\n";
    cout << "Input Number: ";
    cin >> n;
    if(calac(n) == n){
        cout << "n la so doi xung";
    }
    else{
        cout << "n khong phai la so doi xung";
    }
    return 0;
}
