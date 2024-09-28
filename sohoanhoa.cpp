#include <iostream>
#include <iomanip>
using namespace std;

int n,a;

int kttonguoc(int n){
    int tong=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        tong +=i;
     }
     if (tong==n )
        return 1;
    return 0;
}


int main(){
    cout << "***So hoan hao***\n";
    cout << "Input Number: ";
    cin >> n;
      for(int i=1;i<=n;i++)
    if(kttonguoc(i)==1){
       cout << i << " ";
   }
    return 0;
}
