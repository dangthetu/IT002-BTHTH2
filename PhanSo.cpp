#include "PhanSo.h"

void PhanSo::Nhap(){
int i = 0;
int static y=1;
cout<<"Nhap phan so thu "<<y<<"\n";
    while(i < 1)
    {
        cout << "Nhap tu so: ";
        cin >> iTu;
        cout << "Nhap mau so: ";
        cin >> iMau;
        if(iMau == 0) cout << "Nhap sai, moi nhap lai." << endl;
        else i++;

    }
    y++;
}

void PhanSo::Xuat(){
 if (iMau == 0) cout << "Khong xac dinh." << endl;
    else if(iMau == iTu) cout << "1" << endl;
    else if(iMau == 1) cout << iTu << endl;
    else cout << iTu << "/" << iMau << endl;

}

void PhanSo :: lamTron(){
    while (fabs(iTu - round(iTu)) > 1e-12 || fabs(iMau - round(iMau)) > 1e-12)
    {
        iTu *= 10;
        iMau *= 10;
    }
}

int PhanSo::gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a);
}

void PhanSo::RutGon(){
int ucln = gcd(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;
}

PhanSo PhanSo:: Tong(PhanSo a, PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iMau + a.iMau * b.iTu;
    z.iMau = a.iMau * b.iMau;
    return z;

}

PhanSo PhanSo::Hieu(PhanSo a, PhanSo b){
    PhanSo z;
    z.iTu = a.iTu * b.iMau - a.iMau * b.iTu;
    z.iMau = a.iMau * b.iMau;
return z;
}

PhanSo PhanSo::Tich(PhanSo a,PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iTu;
    z.iMau = a.iMau * b.iMau;
return z;
}

PhanSo PhanSo::Thuong(PhanSo a,PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iMau;
    z.iMau = a.iMau * b.iTu;
return z;
}

void PhanSo:: chuyenDau(){
    if((iMau < 0 && iTu > 0) || (iMau < 0 && iTu < 0)){
        iTu *= -1;
        iMau *= -1;
    }
}

void PhanSo :: SoSanh(PhanSo x, PhanSo y){
    int a1, a2;
    x.chuyenDau();
    y.chuyenDau();
    a1 = x.iTu * y.iMau;
    a2 = y.iTu * x.iMau;
   if(a1>a2){
        x.RutGon();
        cout << "Phan so 1 la phan so lon hon: p1 = " << x.iTu << "/" << x.iMau;
    }
    else if(a1 == a2){
        cout << "Hai phan so bang nhau.";
    }
    else{
        y.RutGon();
        cout << "Phan so 2 la phan so lon hon: p2 = " << y.iTu << "/" << y.iMau;
    }
}

