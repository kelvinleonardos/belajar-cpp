# Loop

## 1. While
```angular2html
while (syarat) {
    aksi;
}
```
`while` akan terus berjalan apabila syarat terpenuhi. Harus ada yang membatasi. 

## 2. Do while
```angular2html
do {
    aksi;
} while (syarat);
```
Perbedaan dengan while adalah yang dieksekusi adalah aksinya dulu baru mengecek syarat. Sehingga aksi akan tetap dijalankan minimal sekali, sementara whilw ada kemungkinan aksinya tidak akan dijalankan.

## 3. For
```angular2html
for (inisialisasi; loop kondisi; increment/decrement) {
    statement;
}
```
> Operator assignment bisa diubah sesuai operator assignment yang ada, seperti i++, i--, i+=2, dsb.
> Di dalam operasi increment atau decrement, bisa terdapat operasi lain yang berhubungan dengan i.

> Run program `while`, `do_while`, dan `for` dengan .