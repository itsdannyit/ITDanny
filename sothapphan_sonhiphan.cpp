#include <iostream>
#include <iomanip>
using namespace std;

int n,sodu,sonhiphan=0,c=1;

int calac(int n){
    while(n>0){
        sodu = n % 2;
        sonhiphan = sonhiphan + sodu * c;
        n = n / 2;
        c = c*10;
    }
    return sonhiphan;
}

int main(){
    cout << "************Bit Calculator************\n";
    cout << "Input a number to convert to bits: ";
    cin >> n;
    cout << calac(n);
    return 0;
}
