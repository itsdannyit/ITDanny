#include <iostream>
#include <iomanip>
using namespace std;

int n,f[1000];

void fibo(int n){
   f[0]=0;
   f[1]=1;
   for(int i=2;i<=n;i++){
        f[i] = f[i-2] + f[i-1];
   }
   for(int j=0;j<=n;j++)
   cout << f[j] << setw(4);
}

int main(){
    cout << "***Fibonanci Calculator***\n";
    cout << "Input Number: ";
    cin >> n;
    fibo(n);
    return 0;
}
