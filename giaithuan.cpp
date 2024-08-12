#include <iostream>

using namespace std;

int main(){
    double n,x = 1;
    cout << "Input n:";
    cin >> n;
    for(int i=1;i<=n;i++){
        x = x*i;
    }
    cout << x;
    return 0;
}
