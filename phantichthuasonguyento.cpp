#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,dem=0;
    cout << "input n: ";
    cin >> n;
    if(n > 5){
    m = n;
    for(int i=2;i<=n;i++){
           dem=0;
           while(m % i == 0){
                dem++;
                m=m/i;
           }
          if(dem>0){
             cout << i<<"^"<<dem;
             if (m>1)
                 cout<<" x ";
                    }
      }

    }
    else{
        cout << "Please input a number larger than 5.";
    }
    return 0;
}
