#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,a[1000],dem = 0,k=0;
    cout << "Nhap so nguyen trong day la: ";
    cin >>n;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];

    }
    cout << "Uoc Cua " << a[0] << " La: ";
    for(int i = 1;i < n;i++){
        if(a[0] % a[i] == 0){
            //cout << "Uoc Cua " << a[0] << " La: ";
            cout << a[i] << setw(3);
            k++;
        }
    }
    if(k == 0){
            cout << "Khong uoc";
        }
    return 0;
}
