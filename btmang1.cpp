#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,a[1000],dem = 0,le = 0;
    cout << "Nhap so nguyen trong day la: ";
    cin >>n;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if((a[i] % 2 == 0) && (a[i] != 0)){
            dem++;
        }
        if(a[i] % 2 != 0){
            le = le +a[i];

        }
    }
    cout << "So luong so chan trong day la: " << dem << endl;
    cout << "Tong so le la: " << le;
    return 0;
}
