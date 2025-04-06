#include <iostream>
#include<math.h>
using namespace std;

class SoPhuc{
private:
    double iThuc;
    double iAo;
public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc );
    SoPhuc Hieu(SoPhuc );
    SoPhuc Tich(SoPhuc );
    SoPhuc Thuong(SoPhuc );
};
