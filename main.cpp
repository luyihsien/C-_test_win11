#include <iostream>
#include "add.h"

int triple(int x)
{
    return add(x, add(x, x));
}
//https://zh.wikipedia.org/wiki/%E5%A4%B4%E6%96%87%E4%BB%B6 標頭檔說明
int main() {
    std::cout <<triple(6)<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
