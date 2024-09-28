#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,*m,*n;
    a=6;
    b=2;
    m=&a;
    cout << a << " " << b<<endl;
    cout << &a << " " << &b<<endl;
    //0x61ff0c 0x61ff08
    cout << m<<endl;
    //0x61ff0c
    cout << *m<<endl;
    *m=10;
    cout << a<<endl;
    m=&b;
    cout << a<<endl;
    cout << *m<<endl;
    *m=b*10;
    cout<<b<<endl;
    return 0;
}
