#include <iostream>

using namespace std;

int main(){
    string n;
    for(; ;){
        cout << "Input n: ";
        cin >> n;
        if (n == "exit"){
            goto help;
        }
    }
    inf:
        cout << n << endl;
        cout << "ket thuc !!!\n" << endl;
    help:
        cout << "type exit to break" << endl;
    return 0;
}
