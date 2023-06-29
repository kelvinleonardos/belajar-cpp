#include <iostream>

int main() {

    for (int i = 0; i < 10; ++i) {
        if (i == 5){
//            break;
            continue;
        }
        std::cout << i << std::endl;
    }

    int j = 0;
    while (j < 10) {
        j++;
        if (j == 5) {
            continue;
        }
//        j++;
        /* jangan gunakan increment sesudah if, karena saat
        if terpenuhi untuk continue, incrementnya tidak akan dijalankan,
        dan program tidak akan berhenti. */
    }

    return 0;
}
