# Memahami Program dan Compiler

## 1. include
```angular2html
#include <iostream>
```
`iostream`: ada di dalam OS kita \
`include`: mengcopy semua yang ada di iostream dan dimasukkan ke dalam program \
> iostream: inpu output stream

## 2. comment
- Single line comment
```angular2html
// connent
```
- Multi line comment
```angular2html
/*
comment
comment
...
*/
```

## 3. Entry Point
`main`: tempat program pertama kali dimulai. Menjadi penanda dimana program pertama kali dijalankan.

## 4. Fungsi
Blok kode yang akan dijalankan oleh program terdapat dalam sebuah fungsi. Dalam `main.cpp`, `main()` merupakan sebuah fungsi dengan tipe data kembalian (return) integer(int).
```angular2html
int main() {
    ...
    return 0;
}
```
Tanda kurung `()` setelah nama fungsi (main) merupakan tempat menyimpan argumen, yang terdapat di dalam kurung kurawal `{}` setelahnya, merupakan body/badan/isi dari fungsi tersebut.

## 5. "Hello, World!"
```angular2html
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
`std`: standart library yang berasal dari `iostream` \
`cout`: dipanggil oleh std untuk menampilkan sesuatu ke console \
> cout: console out

`<<`: memasukkan yang berada sesudahnya ke sebelumnya
> Bisa juga seperti ini `std::cout << "Hello" << ", World!" << std::endl;`

`endl`: akhir dari streamnya
> endl: end line, kalau ada program lain akan lanjut dibawahnya.

## 6. Compiling
Pastikan sudah punya C++ di komputer.
```angular2html
$ g++ --version
g++ (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Gunakan `g++ + nama_file` untuk mengcompile file C++.
<img src="media/Screencast from 23-06-23 22 26 39.gif">
Setelah `g++ main.cpp` di run di console, maka akan muncul file baru yang merupakan hasil dari compiling.

Program saat dijalankan:
<img src="media/Screencast from 23-06-23 22 39 09.gif">