#include <iostream>

int main() {

    int a = 1;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << "=====" << std::endl;

    int b = 1;
    std::cout << b << std::endl;
    std::cout << b++ << std::endl;
    std::cout << b << std::endl;
    std::cout << "=====" << std::endl;

    int c = 1;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << "=====" << std::endl;

    int d = 1;
    std::cout << d << std::endl;
    std::cout << d-- << std::endl;
    std::cout << d << std::endl;
    std::cout << "=====" << std::endl;

    return 0;
}
