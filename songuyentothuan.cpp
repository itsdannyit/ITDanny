#include <iostream>
#include <iomanip>
using namespace std;

int a,b,i=2;

int cal(int n){
    if (n<2)
    {
       return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
            if( n % i == 0) return 0;
    }
    return 1;
}

int tong(int n){
    int tong = 0;
    while(n>0){
        i = n % 10;
        n = n / 10;
        tong = tong+i;
    }
    return cal(tong);
}

int sothuan(int n){
    int k;
    while(n>0){
        k = n % 10;
        if((k != 2) && (k != 3) && (k != 5) && .(k != 7)){
            return 0;
        }
        n = n / 10;
    }
    return 1;
}

int main(){
    int n;
    cout << "**********Prime_Number_Caculator**********\n";
    cout << "Input Number n: ";
    cin >> n;
    for (int i=1;i<=n;i++)
    if((cal(i)==1) && (tong(i)==1)&&(sothuan(i)==1) ){
        cout << i << setw(4);
    }
    return 0;
}
