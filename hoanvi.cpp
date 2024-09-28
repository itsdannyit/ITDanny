#include <bits/stdc++.h>
using namespace std;

void swapz(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b,n;
    cout<<"input a b: ";
    cin>>a>>b;
    swapz(a,b);
    cout<<"a: "<<a<<" b: "<<b;
    return 0;
}
