// n phan tu, hay xac dinh, day co so phan tu lien tiep bang nhau dai nhat
//{2,3,3,4,4,4,5,5} -> 3
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[1000],n,dem=1,b=1;
    cout<<"n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "a[" <<i<<"] = ";
        cin >>a[i];
    }
    //cout << "Day con lien tiep khac nhau la: ";
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            //cout << a[i] << " ";
            dem++;
        }
        else{
            if(dem>b){
            b = dem;
            }dem = 1;

        }

    }
    if (dem>b)
      b=dem;
    cout << "\nSo lan lap lai lien tiep nhieu nhat la: "<<b;

    return 0;
}

