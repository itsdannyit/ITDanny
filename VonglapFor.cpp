#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;
int max(int a,int b)
{
    return a<b?b:a;
}
int main(){
    int a[5]={1,3,-1,5,-1};
    int tong=-1e18,sum1=0;
    for(int i=0;i<5;i++)
    {
        sum1+=a[i];
        tong=max(tong,sum1);
        if (sum1<0) sum1=0;
    }
    cout<<tong;

    /*cout << "Input a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
    for(int i = n; i >= 0; i--){
        cout << i << " ";
    }*/
    return 0;
}
