#include <iostream>

int main() {

    std::cout << "KALKULATOR" << std::endl;
    std::cout << "==================================" << std::endl;

    float a, b;
    char c;
    float hasil;

    std::cout << "Masukkan bilangan pertama: ";
    std::cin >> a;
    std::cout << "Masukkan bilangan kedua: ";
    std::cin >> b;
    std::cout << "Masukkan operator (+, -, *, /): ";
    std::cin >> c;

    if (c == '+') {
        hasil = a + b;
    } else if (c == '-') {
        hasil = a - b;
    } else if (c == '*') {
        hasil = a * b;
    } else if (c == '/') {
        hasil = a / b;
    } else {
        std::cout << "Operasi tidak valid." << std::endl;
    }

    std::cout << "==================================" << std::endl;

    std::cout << "Hasil: " << hasil << std::endl;
    return 0;
}
