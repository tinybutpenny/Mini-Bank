/*thư mục chức các thư viện hàm biến dùng chung */
#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <iomanip>

#define reset "\33[0m";
#define xanhla "\33[92m";
#define vang "\33[93m";
#define xanhduong "\33[94m"'
#define tim "\33[95m";

extern std::string ten[];

void donrac();
std::string kituthuong(std::string kitu);
std::string kituhoa(std::string kitu);
char chonthoat();



