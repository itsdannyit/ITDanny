#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int z,n=1;
    cout << "Select Shape(a-f): ";
    cin >> z;
//a
    /*for(int i=1;i<=z;i++){
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }*/
//b
    /*for(int i=1;i<=z;i++){
        for(int j=z;j>i;j--)
            cout << "*";
        cout << endl;
    }
}*/
//d
    n = z / 2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
