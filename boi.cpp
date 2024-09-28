#include <iostream>

using namespace std;

int main(){
    int a, b ,n = 0;
    cout << "input a and b:";
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i % 3 == 0){
            n = n + i;
            }
        }
    cout << n;
    return 0;
}
