#include "chung.h"
#include "nhap.h"
#include "xuat.h"
int main() {

    char tieptuc;
    do {
        std::cout << " Bạn có muốn tiếp tục không\n";
        chonthoat();
    } while (tieptuc == 'Y');
    return 0;
}