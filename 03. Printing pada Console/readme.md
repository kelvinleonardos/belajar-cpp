# Printing pada Console

## 1. Menampilkan satu baris di console
```angular2html
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
outputnya:
```angular2html
Hello, World!

```
atau:
```angular2html
int main() {
    std::cout << "Hello, World!";
    return 0;
}
```
outputnya:
```angular2html
Hello, World!
```
`endl`: untuk membuat baris print berikutnya dimulai dari bawah baris yang menggunakan `endl`.

## 2. Menampilkan dua baris di console
```angular2html
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, Unhas!" << std::endl;
    return 0;
}
```
outputnya:
```angular2html
Hello, World!
Hello, Unhas!

```
atau:
```angular2html
int main() {
    std::cout << "Hello, World!\n";
    std::cout << "Hello, Unhas!" << std::endl;
    return 0;
}
```
outputnya:
```angular2html
Hello, World!
Hello, Unhas!

```
`\n`: new line. Berfungsi untuk meletakkan kursor setelahnya di baris baru.

## 3. Menggunakan dua cout tanpa baris baru
```angular2html
int main() {
    std::cout << "Hello, World! ";
    std::cout << "Hello, Unhas!" << std::endl;
    return 0;
}
```
outputnya:
```angular2html
Hello, World! Hello, Unhas!

```

> Spasi tetap dihitung sebagai karakter, sehingga penting untuk menggunaka spasi apabila akan memisah string dalam satu baris.