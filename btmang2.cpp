#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,a[1000],dem = 0,k;
    cout << "Nhap so nguyen trong day la: ";
    cin >>n;
    cout << "So k: ";
    cin >>k;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if(a[i] < k){
            dem++;
        }
    }
    cout << "\nSo luong so nho hon k trong day la: " << dem << endl;
    return 0;
}
