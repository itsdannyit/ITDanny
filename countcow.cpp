//Dem cow(bo) tren 1 canh dong tha n con cow, moi con deo 1 so hieu nguyen duong(la so thang tuoi cua no)
//lam the nao de dem duoc loai bo nao nhieu nhat
//lua bo vao chuong
//b1: tao ra cac chuoh cow va danh stt tu 1 -> max(so tuoi con cow gia nhat). ban dau cac chuon bo dieu ko co cow
//b2: lua bo vao chuong co so hieu bang so hieu cua no
//b3: duyet day chuong co nhieu cow nhat
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,5,13,4,3,6,7,9,8,10,13,6,13,2};
    int n = sizeof(a)/sizeof(int);
    int b[100],max=0,so;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=0;i<100;i++){
        if(b[i]>max){
            max = b[i];
            so = i;
        }
    }
    cout <<so << " " << max;
    return 0;
}
