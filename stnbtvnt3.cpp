#include <iostream>
#include <iomanip>
using namespace std;
int n;
float cal(int n){
    float x=0;
    for(int i=1;i<=n;i++)
        x = x+1/(float)i;
    return x;
}

int main(){
    cout << "Input Number: ";
    cin >> n;
    cout<< fixed << setprecision(2) << cal(n)  ;
    return 0;
}
