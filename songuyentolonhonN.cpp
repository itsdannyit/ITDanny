#include <iostream>
#include <iomanip>
using namespace std;

int a=0,n,m=0,i=2;

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
    cout << "Input Number To Count To: ";
    cin >> n;
    a = n;
    while(1)
    {
        if(cal(n)==1)
        {
            cout<<n;
            break;
        }
        n++;
    }

    return 0;
}
