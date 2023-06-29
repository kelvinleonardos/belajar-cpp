#include <iostream>

int main() {

    int n;

    std::cout << "Masukkan n: ";
    std::cin >> n;

    int a = 0;
    int b = 1;
    int temp = 1;
    for (int i = 1; i <= n; i++) {
        std::cout << temp << std::endl;
        temp = a+b;
        a = b;
        b = temp;
    }

    return 0;
}
