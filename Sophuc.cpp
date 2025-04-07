#include "Sophuc.h"

// Hàm nhập số phức từ bàn phím
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc; // Nhập phần thực
    cout << "Nhap phan ao: ";
    cin >> iAo;   // Nhập phần ảo
}

// Hàm xuất số phức ra màn hình
void SoPhuc::Xuat() {
    if(iAo > 0)
        cout << iThuc << "+" << iAo << "i\n"; // Dạng a + bi
    else if(iAo == 0)
        cout << iThuc << endl; // Chỉ có phần thực
    else
        cout << iThuc << "-" << abs(iAo) << "i\n"; // Dạng a - bi
}

// Hàm tính tổng hai số phức
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc z;
    z.iThuc = iThuc + b.iThuc; // Cộng phần thực
    z.iAo = iAo + b.iAo;       // Cộng phần ảo
    return z;
}

// Hàm tính hiệu hai số phức
SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc z;
    z.iThuc = iThuc - b.iThuc; // Trừ phần thực
    z.iAo = iAo - b.iAo;       // Trừ phần ảo
    return z;
}

// Hàm tính tích hai số phức
// (a + bi)(c + di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc z;
    z.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    z.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return z;
}

// Hàm tính thương hai số phức
// (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c² + d²)
SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc z;
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo; // Mẫu số: c² + d²

    if (mau == 0) {
        cout << "Khong thuc hien duoc phep chia "; // Kiểm tra mẫu số có bằng 0 không
        z.iThuc = 0;
        z.iAo = 0;
        return z;
    }

    z.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau; // Phần thực
    z.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;   // Phần ảo
    return z;
}
