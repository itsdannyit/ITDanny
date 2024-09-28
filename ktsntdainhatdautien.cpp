#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int snt(int n){
    if (n<2)
    {
       return 0;
    }
      for(int i=2;i<=sqrt(n);i++)
            if( n % i == 0) return 0;

    return 1;
}



int main(){
    int a[1000],n,dem=0,dema=0,tong=0,tonga=0,vt=-1;
    freopen("ktsntdainhatdautien.inp","r",stdin);
    freopen("ktsntdainhatdautien.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //dem,tong
    for(int i=0;i<n;i++){
        if(snt(a[i])==1){
            tong = tong + a[i];
            dem++;
        }
        else
        {
            if(dema<dem){
            dema = dem;
            tonga = tong;
            vt = i-dema;
            }
          else if(dema==dem)
           {
               if (tonga<tong)
               {
                   tonga=tong;
                   vt=i-dema;
               }
           }
         dem=0;
         tong=0;
         }
    }

    if(vt==-1){
        cout << "Khong co so nguyen to nao trong mang.";
    }
    else{
    cout<<"Cac so nguyen to la: ";
    for(int i=0;i<dema;i++)
    {
        cout<<a[vt+i]<<" ";
    }
    }

    return 0;
}
