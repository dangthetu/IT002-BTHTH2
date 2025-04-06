#include "Sophuc.h"

int main()
{
SoPhuc z0,z1,a0,a1,a2,a3;

cout<<"Nhap so phuc 1.\n";
z0.Nhap();
cout<<"Nhap so phuc 2.\n";
z1.Nhap();

cout<<"So phuc 1 la ";
z0.Xuat();
cout<<"So phuc 2 la ";
z1.Xuat();

a0 = z0.Tong(z1);
a1 = z0.Hieu(z1);
a2 = z0.Tich(z1);
a3 = z0.Thuong(z1);

cout<<"Tong 2 so phuc la ";
a0.Xuat();
cout<<"Hieu 2 so phuc la ";
a1.Xuat();
cout<<"Tich 2 so phuc la ";
a2.Xuat();
cout<<"Thuong 2 so phuc la ";
a3.Xuat();
}
