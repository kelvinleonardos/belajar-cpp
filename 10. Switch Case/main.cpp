#include <iostream>

int main() {

    int a;

    std::cout << "Masukkan angka: ";
    std::cin >> a;

    switch (a) {
        case 1:
            std::cout << "satu" << std::endl;
            break;
        case 2:
            std::cout << "dua" << std::endl;
            break;
        case 3:
            std::cout << "tiga" << std::endl;
            break;
        default:
            std::cout << "default" << std::endl;
            break;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
