#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//vd1
/*int main(){
    int n = 10;
    int a[10]= {3, 2, 1, 4, 5, 8 , 9, 7, 6,10};
    for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
   cout << "\nDuyet nguoc : ";
   for(int i = n - 1; i >= 0; i--){
      cout << a[i] << " ";
   }
    char arr[10] = {'2', '8', 't', 'e', 'c', 'h'};
   cout << "\nMang char : ";
   for(int i = 0; i < 6; i++){
      cout << arr[i] << ' ';
   }
    return 0;
}*/
//vd2
/*int main(){
    int n,a[1000];
    cout << "Input n: ";
    cin >>n;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Mang vua nhap : ";
    for(int i = 0;i < n;i++){
        cout << a[i] << ' ';
    }
    return 0;
}*/
//vd3
/*void nhap(int a[], int n){
    for(int i = 0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    }

void in(int a[], int n){
   cout << "Mang vua nhap : ";
   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
}

int main(){
    int n,a[1000];
    cout << "Input n: ";
    cin >>n;
    nhap(a,n);
    in(a,n);
    return 0;
}*/
//vd4
/*#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n){
   if(n < 2)
      return false;
   for(int i = 2; i <= sqrt(n); i++){
      if(n % i == 0) return false;
   }
   return true;
}

int main(){
    int n = 10;
    int a[10] = {2, 3, 19, 88, 100, 28, 47, 31, 14, 25};
    cout << "Cac so nguyen to trong day : ";
    for(int i=0;i<n;i++){
        if(nt(a[i])){
            cout << a[i] << ' ';
        }
    }
    return 0;
}*/

//nhap vao mang so nguyen a in ra nhung so nguyen duong va nguyen am trong bang

void nhap(int a[], int n){
    for(int i = 0;i<n;i++){
        cout << "a[" << i+1 << "] = ";
        cin >> a[i];
    }
    }

void in(int a[], int n){
   cout << "So Nguyen Duong Vua Nhap: ";
   for(int i = 0; i < n; i++){
        if(a[i] > 0){
      cout << a[i] << " ";
    }
   }
   cout << "So Nguyen Am Vua Nhap: ";
   for(int i = 0; i < n; i++){
        if(a[i] < 0){
      cout << a[i] << " ";
    }
   }
}

int main(){
    int n,a[1000];
    cout << "Input n: ";
    cin >>n;
    nhap(a,n);
    in(a,n);
    return 0;
}
