#include "giophutgiay.h"

// Hàm nhập thời gian từ bàn phím
void GioPhutGiay::Nhap() {
    int i = 0;
    while (i == 0) {
        i = 1;
        cout << "Nhap gio: ";
        cin >> iGio;

        cout << "Nhap phut: ";
        cin >> iPhut;

        cout << "Nhap giay: ";
        cin >> iGiay;

        // Kiểm tra tính hợp lệ của giờ, phút, giây
        if (iGio > 24 || iGio < 0) {
            cout << "Gio khong dung, moi nhap lai.\n";
            i = 0;
        }
        if (iPhut > 60 || iPhut < 0) {
            cout << "Phut khong dung, moi nhap lai.\n";
            i = 0;
        }
        if (iGiay > 60 || iGiay < 0) {
            cout << "Giay khong dung, moi nhap lai.\n";
            i = 0;
        }
    }
}

// Hàm xuất thời gian ra màn hình theo định dạng HH:MM:SS
void GioPhutGiay::Xuat() {
    cout << "Ket qua la: ";
    cout << setfill('0') << setw(2) << iGio << ":"
         << setfill('0') << setw(2) << iPhut << ":"
         << setfill('0') << setw(2) << iGiay << endl;
}

// Hàm tính cộng thêm 1 giây vào thời gian hiện tại
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++; // Tăng giây lên 1

    // Nếu số giây vượt quá 59 thì đặt lại về 0 và tăng phút
    if (iGiay > 59) {
        iGiay = 0;
        iPhut++;

        // Nếu số phút vượt quá 59 thì đặt lại về 0 và tăng giờ
        if (iPhut > 59) {
            iPhut = 0;
            iGio++;

            // Nếu số giờ vượt quá 23 thì quay về 0 (bắt đầu ngày mới)
            if (iGio > 23) {
                iGio = 0;
            }
        }
    }

    // Nếu giờ là 24 (trường hợp nhập nhầm) thì đặt lại về 0
    if (iGio == 24) iGio = 0;

    // Nếu phút là 60 (trường hợp nhập nhầm) thì xử lý lại
    if (iPhut == 60) {
        iPhut = 0;
        iGio++;
    }
}
