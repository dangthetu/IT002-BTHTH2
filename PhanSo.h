#include <iostream>
#include<math.h>
using namespace std;
class PhanSo{
private:
   double iTu, iMau;
   int gcd(int, int);
   void chuyenDau();
public:
void Nhap();
void Xuat();
void RutGon();
PhanSo Tong(PhanSo, PhanSo );
PhanSo Hieu(PhanSo ,PhanSo );
PhanSo Tich(PhanSo ,PhanSo );
PhanSo Thuong(PhanSo ,PhanSo );
void lamTron();
void SoSanh(PhanSo ,PhanSo);
};
