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
    }
    int max = a[0],min = a[0];
    for(int i = 1;i < n;i++){
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }
    cout << "Gia tri lon nhat la: " << max ;
    cout << "\nGia tri nho nhat la: " << min;
    return 0;
}
