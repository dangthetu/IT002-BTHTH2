#include "giophutgiay.h"

void GioPhutGiay::Nhap(){
 int i = 0;
while(i==0){
i=1;
cout<<"Nhap gio: ";
cin>>iGio;
cout<<"Nhap phut: ";
cin>>iPhut;
cout<<"Nhap giay: ";
cin>>iGiay;
if(iGio>24 || iGio<0){
    cout<<"Gio khong dung, moi nhap lai.\n";
    i=0;
}
if(iPhut>60 || iPhut<0){
     cout<<"Phut khong dung, moi nhap lai.\n";
     i=0;
}
if(iGiay>60 || iGiay<0){
    cout<<"Giay khong dung, moi nhap lai.\n";
    i=0;
}
}
}

void GioPhutGiay::Xuat(){
 cout<<"Ket qua la: ";
 cout<< setfill('0') << setw(2)<<iGio<<":"<< setfill('0') << setw(2)<<iPhut<<":"<< setfill('0') << setw(2)<<iGiay<<endl;
}

void GioPhutGiay::TinhCongThemMotGiay(){
iGiay++;
if(iGio==24) iGio=0;
if(iPhut==60){
    iPhut=0;
    iGio++;
}
if(iGiay>59){
    iPhut++;
    iGiay = 0;
    if(iPhut>59){
       iGio++;
       iPhut = 0;
       if(iGio>23){
        iGio=0;
       }
    }
  }
}
