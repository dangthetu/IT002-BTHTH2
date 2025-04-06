#include "PhanSo.h"

using namespace std;

int main()
{
   PhanSo p0,p1,p2,p3,p4,p5,p6;

   p0.Nhap();
   p1.Nhap();

   p0.lamTron();
   p1.lamTron();

   p0.RutGon();
   p1.RutGon();

   p2 = p2.Tong(p0, p1);
   p2.RutGon();

   p3 = p3.Hieu(p0, p1);
   p3.RutGon();

   p4 = p4.Tich(p0, p1);
   p4.RutGon();

   p5 = p5.Thuong(p0, p1);
   p5.RutGon();

   cout<<"Phan so 1 la ";
   p0.Xuat();
   cout<<"Phan so 2 la ";
   p1.Xuat();
   cout<<"Tong = ";
   p2.Xuat();
   cout<< "Hieu = ";
   p3.Xuat();
   cout<<"Tich = ";
   p4.Xuat();
   cout<<"Thuong = ";
   p5.Xuat();
   p0.SoSanh(p0,p1);
   return 0;
}





















