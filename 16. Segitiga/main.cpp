#include <iostream>

int main() {

    int n;
    std::cout << "masukkan n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "==========================" << std::endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "==========================" << std::endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n-1; j >= i; j--) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "==========================" << std::endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            std::cout << " ";
        }
        for (int j = n; j >= i; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
