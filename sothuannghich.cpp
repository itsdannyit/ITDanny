#include <iostream>
#include <iomanip>

using namespace std;

int sothuannghich(int n){
    int so=0,ans;
    while(n>0){
    ans = n % 10;
    so = so * 10 + ans;
    n = n / 10;
    }
    return so;
}

int main(){
    int a[1000],n,dem=0;
    cout << "Input:";
    cin >> n;
    for(int i = 0; i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        if(sothuannghich(a[i])==a[i]){
            dem++;
        }
    }
    cout << "Counted: " << dem;
    cout << "\nOutput: "; //2222 3 19 88 12321 28 4774 31 141 25
    for(int i = 0;i<n;i++){
        if(sothuannghich(a[i])==a[i]){
            cout << a[i] << "  " ;
            dem++;
        }
    }
    //cout << "\nCounted: " << dem;
    return 0;
}
