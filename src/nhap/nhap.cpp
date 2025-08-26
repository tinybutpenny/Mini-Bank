#include "nhap.h"

void nhapten() {
    std::cout << " Vui lòng nhập tên của bạn \n";
    while (true) {
        std::getline(std::cin, ten[sokhach]);
        if (std::cin.fail()) {
            std::cout << " Nhập lỗi \n";
        } else {
            sokhach ++;
            return;
        }
    }
}