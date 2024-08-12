#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n, dem;
    cout << "IAN: ";
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        dem = 0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i % j == 0)
            {
                dem++;
            }
        }
        if (dem==0 && i>1) cout<<i<<" ";
    }
    return 0;
}
