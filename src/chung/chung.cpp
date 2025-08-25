#include "chung.h"

std::string ten[1000]= {"duongthang", "nguyenhuyen"};
std::string matkhau[1000] = {"thang2004@", "huyen2004@"};
std::string mapin[1000] = {"879485", "456782"};

void donrac() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');
    return;
}

void nhap() {

}
std::string kituthuong(std::string kitu) {
    for (char &a : kitu) {
        a = tolower(a);
    }
    return kitu;
}

std::string kituhoa(std::string kitu) {
    for (char &a : kitu) {
        a = toupper(a);
    }
    return kitu;
}

char chonthoat() {
    std::cout << " Chỉ nhập y/n\n";
    char thoat;
    while (true) {
        std::cin >> thoat;
        thoat = toupper(thoat);
        bool kiemtra = (thoat == 'Y' || thoat == 'N');
        if (std::cin.fail()) {
            std::cout << " Nhập lỗi\n";
            donrac();
            continue;
        } else if(!kiemtra) {
            std::cout << " Nhập lỗi\n";
        } else {
            break;
        }
    }
    return thoat;
}