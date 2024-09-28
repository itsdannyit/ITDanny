#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
// nhap vao ki tu kt xem la ki tu hay ko roi kt ki tu vua nhao co hop le hay ko neu hop le thi kt xem kt xem kt do la chu hoa hay chu thuong neu ko hop le thi bao sai ki tu
    char a;
    cout << "Type a character: ";
    cin >> a;
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)){
        cout << " La Hop Le" << endl;
        if (a >= 65 && a <= 90){
            cout << a << " La Chu Hoa";}
        else{
            cout << a << " La Chu Thuong";}}
    else{
        cout << a << " Khong Hop Le" << endl << "Vui long nhap lai!!!";}





    /*char chara1, chara2, chara3, chara4;
    cout << "input a character: ";
    cin >> chara4;
    int n = chara4 + 10;
    cout << n << endl;
    ++chara4;
    cout << (int)chara4 << endl;
    cout << chara4 << endl;
    chara4 = chara4 +32;
    cout << chara4  << endl;*/
    /*cin >> chara1 >> chara2 >> chara3;
    cout << int(chara1) << " " << int(chara2) << " " << int(chara3) << endl;
    int n = chara1;
    cout << n << endl;
    cout << chara1 + 100 << endl;*/
    return 0;
}
