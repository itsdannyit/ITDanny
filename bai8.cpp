#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,a[1000], k = 0,max;
    cout << "Nhap so nguyen trong day la: ";
    cin >>n;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    max=a[0];
    for(int i = 0;i < n;i++){
        if(max < a[i]){
            max = a[i];
            k = i;}
    }
    cout << "Chi so phan tu  "<<max  << " la: "<< k;
    return 0;
}
