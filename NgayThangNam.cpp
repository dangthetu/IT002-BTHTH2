#include"NgayThangNam.h"
using namespace std;

void NgayThangNam::Nhap(){
    int i = 0;
    while (i == 0) {
        cout << "Nhap ngay: ";
        cin >> iNgay;
        cout << "Nhap thang: ";
        cin >> iThang;
        cout << "Nhap nam: ";
        cin >> iNam;
        i = 1;

        // Kiểm tra tính hợp lệ của ngày nhập vào
        switch (iThang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if ((iNgay > 31) || (iNgay < 1)) {
                    cout << "Ngay khong hop le, moi nhap lai.\n";
                    i = 0;
                }
                break;
            case 4: case 6: case 9: case 11:
                if ((iNgay > 30) || (iNgay < 1)) {
                    cout << "Ngay khong hop le, moi nhap lai.\n";
                    i = 0;
                }
                break;
            case 2:
                // Xử lý riêng cho tháng 2 dựa trên năm nhuận
                if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
                    if (iNgay > 29 || iNgay < 1) {
                        cout << "Ngay khong hop le, moi nhap lai.\n";
                        i = 0;
                    }
                } else {
                    if (iNgay > 28 || iNgay < 1) {
                        cout << "Ngay khong hop le, moi nhap lai.\n";
                        i = 0;
                    }
                }
                break;
            default:
                cout << "Ngay, thang khong hop le, moi nhap lai.\n";
                i = 0;
                break;
        }

        // Không chấp nhận năm 0
        if (iNam == 0) {
            cout << "Nam khong hop le, moi nhap lai.\n";
            i = 0;
        }
    }
}
void NgayThangNam::Xuat(){
cout<<"Ngay tiep theo la: "<<iNgay<<"/"<<iThang<<"/"<<iNam;
}

// Hàm tính ngày hôm sau của một ngày bất kỳ
void NgayThangNam::TinhNgayTiepTheo(){

    int maxDay = 0;

    // Xác định số ngày tối đa của tháng hiện tại
    switch (iThang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDay = 31;
            break;
        case 4: case 6: case 9: case 11:
            maxDay = 30;
            break;
        case 2:
            // Kiểm tra năm nhuận
            if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
                maxDay = 29;
            } else {
                maxDay = 28;
            }
            break;
    }

    // Tăng ngày lên 1
    iNgay++;

    // Nếu ngày vượt quá số ngày của tháng, chuyển sang tháng tiếp theo
    if (iNgay > maxDay) {
        iNgay = 1;
        iThang++;

        // Nếu tháng vượt quá 12, chuyển sang năm mới
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }

}
