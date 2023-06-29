#include <iostream>

int main() {

    int a = 1;
    int b = 1;

//    infinite loop
//    do {
//        std::cout << a << std::endl;
//    } while (a < 2);

//  walau kondisinya false, akan tetap dijalankan sekali
    do {
        std::cout << b << std::endl;
        b++;
    } while (b < 10);

    do {
        std::cout << a << std::endl;
        a++;
    } while (a < 0);

    return 0;
}
