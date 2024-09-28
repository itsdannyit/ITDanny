#include <iostream>
#include <iomanip>
using namespace std;
int a,b,c,d;

int main(){
    cout << "****** Bang Cuu Chuong Dien Tu ******\n";
    cout << "Nhap bang cuu chuong can tim (2 -> 9): ";
    cin >> a;
    int i = a * 10;
    cout << "Bang Cuu Chuong " << a << " la :\n";
    for(int i=2;i<=10;i++){
    for(b=1;b<=10;b++)
        {
            cout << setw(4) << b * i;
        }
        cout << endl;
    }
    return 0;
}
/*int main(){
    int n;
    cout << "********Phan mem dem so tu dong********\n";
    cout << "Nhap so muon dem toi: ";
    cin >> n;
    for(int i=1;i<=10;i++)
    {

       for(int j=i;j<=n;j+=10)
       {
        cout << j << setw(4);
       }
       cout<<"\n";
    }

    return 0;
}*/
/*int main(){
    int n;
    cout << "********Phan mem dem so tu dong********\n";
    cout << "Nhap so muon dem toi: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    if(i % 10 == 0){
        cout << setw (4) << i << endl;
    }
    else{
        cout << i << setw(4);
    }
    return 0;
}*/
/*int main(){
    cout << "****** Bang Cuu Chuong Dien Tu ******\n";
    cout << "Nhap bang cuu chuong can tim (2 -> 9): ";
    cin >> a;
    int i = a * 10;
    cout << "Bang Cuu Chuong " << a << " la :\n";

    for(b=1;b<=10;b++)
        {
            cout << a <<setw(2)<< "*" << setw(2) << b << setw(2) << "=" << setw(2);
            cout << a * b << endl;
        }
    return 0;
}*/
// nhap vao 1 so n xuat ra 2 dong in ra cac so le nho hon n va dong 2 in ra so chan nho hon hoac bang n
/*void schan(int a){
    for(int c=1;c<=a;c++)
    if(c % 2 == 0){
        cout << c << " ";
    }
}

void sle(int a){
    for(int d=0;d<=a;d++)
    if(d % 2 == 1){
        cout << d << " ";
    }
}

int main(){
    cout << "******* Even and Odd Calculator V1 *******\n";
    cout << "Input Number: ";
    cin >> a;
    cout << "Even Numbers: \n";
    schan(a);
    cout << "\nOdd Numbers: \n";
    sle(a);
    return 0;
}*/

/*void yeet(int a,int b,int c){
    cout << "Hello World\n";
    cout << "cpp.org\n";
    int n = a + b + c;
    cout << "Ket qua la: " << n;
}
int main(){
    cout << "****** Chuong Trinh Tinh Tong Ba So ******\n";
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;
    yeet(a,b,c);
    return 0;
}*/
