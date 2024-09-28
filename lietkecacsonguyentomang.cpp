#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int n,a[1000];
int cal(int n)
{
    if (n<2)
        return 0;
    for(int i=2;i<n;i++)
       if( n % i == 0) return 0;
    return 1;
}

int main(){
    int a[1000],n;
    cout << "Input: ";
    cin >> n;
    for(int i = 0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "prime: ";
    for(int i = 0;i<n;i++){
    if(cal(a[i]) == 1){
       cout << a[i] << setw(4);
       }
    }
    return 0;
    }
