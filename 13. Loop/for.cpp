#include <iostream>

int main() {

    for (int i = 0; i < 10; ++i) {
        std::cout << i << std::endl;
    }

    int a = 0;
    for (int j = 1; j < 10; j++) {
        a += j;
        std::cout << j << a << std::endl;
    }
    // atau
    int b = 0;
    for (int k = 1; k < 10; k++, b += k) {
        std::cout << k << b << std::endl;
    }

    return 0;
}
