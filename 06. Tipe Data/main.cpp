#include <iostream>
#include <limits>

int main() {

    // bilangan bulat
    short a = 1;
    int b = 2;
    long c = 3;

    // bilangan desimal
    float d = 4.0;
    double e = 5.5;

    // karakter
    char f = 'a';

    // boolean
    bool g = true;

    // memeriksa ukuran memori dan batas maksimum dan minimum
    std::cout << a << std::endl;
    std::cout << sizeof(a) << " byte" << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
