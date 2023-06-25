#include <iostream>

int main() {

    int a;

    std::cout << "Masukkan angka: ";
    std::cin >>a;

    if (a == 1){
        std::cout << "satu" << std::endl;
    }

    if (a == 1) {
        std::cout << "satu" << std::endl;
    } else {
        std::cout << "bukan satu" << std::endl;
    }

    if (a == 1) {
        std::cout << "satu" << std::endl;
    } else if (a == 2) {
        std::cout << "dua" << std::endl;
    } else {
        std::cout << "bukan satu atau dua" << std::endl;
    }

    return 0;
}
