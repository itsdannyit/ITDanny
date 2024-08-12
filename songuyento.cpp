#include <iostream>
#include <iomanip>
using namespace std;

int n,i=2;

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
    for (int i=1;i<=n;i++)
        if(cal(i)==1)
           cout << i<<" ";
    return 0;
}
