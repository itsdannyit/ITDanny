#include <iostream>
using namespace std;

int gcd(int a, int b){
    int gcd = 1;
    int i;
    if (a < b){
        i = a;
    }
    else{
        i = b;
    }
    while(i > 1){
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
        --i;
    }

    return gcd;
}


int main() {
    int a[1000], n;
    cout << "***UCLN CALCULATOR***" << endl;
    cout << "Version 1.0" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            if(gcd(a[i],a[j])==1){
            cout << "(" << a[i] << "," << a[j] << ")" << endl;
        }
}
    return 0;
}
