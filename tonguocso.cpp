#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n,tong;
    cout << "Input a number:";
    cin >> n;
    tong=0;
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            cout << i << " " << endl ;
            tong=tong+i;
        }
    }
    cout << "tong cua cac uoc la: " << tong;
    return 0;
}

//U(10)) n co dinh, i thay doi
