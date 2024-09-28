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

int main(){
    cout << "**********Prime_Number_Caculator**********\n";
    cout << "Input Number From a To b: ";
    cin >> a;
    cin >> b;
    for (int i=a+1;i<=b;i++)
        if(cal(i)==1)
           cout << i<<" ";
    return 0;
}

