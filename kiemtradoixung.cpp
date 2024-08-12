#include <iostream>

using namespace std;

int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    return 0;
}
