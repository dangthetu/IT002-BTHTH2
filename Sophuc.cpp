#include "Sophuc.h"

void SoPhuc::Nhap(){
   cout << "Nhap phan thuc: ";
   cin >> iThuc;
   cout << "Nhap phan ao: ";
   cin >> iAo;
}

void SoPhuc::Xuat(){
if(iAo>0) cout<<iThuc<<"+"<<iAo<<"i\n";
else if(iAo==0) cout<<iThuc<<endl;
else cout<<iThuc<<"-"<<abs(iAo)<<"i\n";
}

SoPhuc SoPhuc::Tong(SoPhuc b){
    SoPhuc z;
    z.iThuc = iThuc + b.iThuc;
    z.iAo = iAo + b.iAo;
    return z;
}


SoPhuc SoPhuc::Hieu(SoPhuc b){
    SoPhuc z;
    z.iThuc = iThuc - b.iThuc;
    z.iAo = iAo - b.iAo;
    return z;
}

SoPhuc SoPhuc::Tich(SoPhuc b){
    SoPhuc z;
    z.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    z.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return z;
}

SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc z;
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    if (mau == 0) {
        cout << "Khong thuc hien duoc phep chia ";
        z.iThuc = 0;
        z.iAo = 0;
        return z;
    }

    z.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    z.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;
    return z;
}
