#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
//while example 1
    /*int n,i=1;
    cout << "n: ";
    cin >> n;
    while(i <= n){
        cout << i << " ";
        i++;
    }*/
//while example 2
    /*double n, dem = 0;
    cin >> n;
    while(n != 0){
        dem++;
        n /= 10;
    }
    cout << dem;*/
//while example 3
    /*long long n,tong = 0;
    cin >> n;
    while(n != 0){
        tong += n % 10;
        n /= 10;
    }
    cout << "tong chu so cua n: " << tong << endl;*/
//while example 4
    /*int n;
    while(1){
        printf("Nhap n : ");
        scanf("%d", &n);
        if(n == 28){
            goto end;
        }
        else{
            printf("Nhap lai\n");
        }
    }
    end:*/
    int n,i=1,x=1;
    cin >> n;
    while(i<=n){
        x = x * i;
        ++i;
    }
    cout << x;
    return 0;
}

