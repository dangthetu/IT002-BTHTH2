#include "PhanSo.h"

// Hàm nhập phân số từ bàn phím
void PhanSo::Nhap(){
    int i = 0;
    static int y = 1; // Biến static để đếm số lần gọi hàm Nhập
    cout << "Nhap phan so thu " << y << "\n";
    
    while(i < 1)
    {
        cout << "Nhap tu so: ";
        cin >> iTu;
        cout << "Nhap mau so: ";
        cin >> iMau;
        
        if(iMau == 0)
            cout << "Nhap sai, moi nhap lai." << endl; // Kiểm tra mẫu số khác 0
        else
            i++;
    }
    y++;
}

// Hàm xuất phân số ra màn hình
void PhanSo::Xuat(){
    if (iMau == 0)
        cout << "Khong xac dinh." << endl; // Trường hợp mẫu bằng 0
    else if(iMau == iTu)
        cout << "1" << endl; // Trường hợp tử và mẫu bằng nhau
    else if(iMau == 1)
        cout << iTu << endl; // Trường hợp mẫu bằng 1
    else
        cout << iTu << "/" << iMau << endl; // Xuất dạng phân số
}

// Hàm làm tròn tử và mẫu về số nguyên nếu bị lẻ do tính toán
void PhanSo::lamTron(){
    while (fabs(iTu - round(iTu)) > 1e-12 || fabs(iMau - round(iMau)) > 1e-12)
    {
        iTu *= 10;
        iMau *= 10;
    }
}

// Hàm tìm ước chung lớn nhất (GCD) giữa 2 số nguyên
int PhanSo::gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a); // Trả về GCD tuyệt đối
}

// Hàm rút gọn phân số
void PhanSo::RutGon(){
    int ucln = gcd(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;
}

// Hàm tính tổng hai phân số
PhanSo PhanSo::Tong(PhanSo a, PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iMau + a.iMau * b.iTu; // Quy đồng và cộng tử
    z.iMau = a.iMau * b.iMau; // Mẫu số chung
    return z;
}

// Hàm tính hiệu hai phân số
PhanSo PhanSo::Hieu(PhanSo a, PhanSo b){
    PhanSo z;
    z.iTu = a.iTu * b.iMau - a.iMau * b.iTu;
    z.iMau = a.iMau * b.iMau;
    return z;
}

// Hàm tính tích hai phân số
PhanSo PhanSo::Tich(PhanSo a, PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iTu;
    z.iMau = a.iMau * b.iMau;
    return z;
}

// Hàm tính thương hai phân số
PhanSo PhanSo::Thuong(PhanSo a,PhanSo b ){
    PhanSo z;
    z.iTu = a.iTu * b.iMau;
    z.iMau = a.iMau * b.iTu;
    return z;
}

// Hàm chuyển dấu phân số về dạng mẫu dương
void PhanSo::chuyenDau(){
    if((iMau < 0 && iTu > 0) || (iMau < 0 && iTu < 0)){
        iTu *= -1;
        iMau *= -1;
    }
}

// Hàm so sánh hai phân số
void PhanSo::SoSanh(PhanSo x, PhanSo y){
    int a1, a2;
    x.chuyenDau();
    y.chuyenDau();
    a1 = x.iTu * y.iMau; // Quy đồng tử số
    a2 = y.iTu * x.iMau;
    
    if(a1 > a2){
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
