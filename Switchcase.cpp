#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    /*int n;
    cin >> n;
    switch(n){
        case 1:
            cout << "One\n";
            break;
        case 2:
            cout << "Two\n";
            break;
        case 3:
            cout << "Three\n";
            break;
        case 4:
            cout << "Four\n";
            break;
        default:
            cout << "Default\n";*/
//nhap 2 gia tri ab sau do dung switch case sau do nhap tiep phep toan cong tru nhan chia va in ra ket qua tuong ung voi phep toan vua nhap dc
    int a,b;
    char op;
    cout << "input a,b" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "choose op(+,-,*,/):";
    cin >> op;
    switch(op){
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << abs(a - b);
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << abs(a / b);
            break;
        default:
            cout << "Loi op vui long nhap lai";
}
    return 0;
}
