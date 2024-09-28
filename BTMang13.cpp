#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 11;
    int a[11] = {2, 3, 101, 8, 7, 11, 19, 4, 10, 23, 5};
    int dem = 0, tong = 0;
    int res_dem = 0, res_tong = 0, start = -1;
    for(int i = 0; i < n; i++){
        if(prime(a[i])){
            ++dem;
            tong += a[i];
        }
        else{
            if(dem > res_dem){
                res_dem = dem;
                res_tong = tong;
                start = i - res_dem;
            }
            else if(dem == res_dem){
                if(tong > res_tong){
                    res_tong = tong;
                    start = i - res_dem;
                }
            }
            dem = 0; tong = 0;
        }
    }
    //cap nhat day con ket thuc tai a[n - 1]
   /* if(dem > res_dem){
        res_dem = dem;
        res_tong = tong;
        start = n - res_dem;
    }
    else if(dem == res_dem){
        if(tong > res_tong){
            res_tong = tong;
            start = n - res_dem;
        }
    }*/
    if(start == -1){
        cout << "Mang khong chua so nguyen to !\n";
    }
    else{
        for(int i = 0; i < res_dem; i++){
            cout << a[i + start] << ' ';
        }
    }
    return 0;
}
