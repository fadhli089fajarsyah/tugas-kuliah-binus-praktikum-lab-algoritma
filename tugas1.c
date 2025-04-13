#include <stdio.h> // untuk import Library input-output

int main()
{
    int a, b, c; //  tiga variabel bilangan bulat

    printf("Masukkan bilangan pertama: "); // label Meminta pengguna memasukkan bilangan kedua
    scanf("%d", &a);                       // menyimpan inputan ke dalam variabel a

    printf("Masukkan bilangan kedua  : "); // label Meminta pengguna memasukkan bilangan kedua
    scanf("%d", &b);                       // menyimpan inputan ke dalam variabel b

    // Meminta pengguna memasukkan bilangan ketiga
    printf("Masukkan bilangan ketiga : ");
    scanf("%d", &c); // menyimpan inputan ke dalam variabel c

    int jumlah = a + b + c;      // menjumlahkan ketiga bilangan
    int pengurangan = a - b - c; // mengurangkan b dan c dari a
    int perkalian = a * b * c;   // mengalikan ketiga bilangan

    float pembagian = (b != 0 && c != 0) ? (float)a / b / c : 0.0; // pembagian a dan hanya dilakukan jika b dan c bukan nol

    float rata_rata = (float)jumlah / 3; // Menghitung rata-rata dari ketiga bilangan

    printf("\n============================= Hasil =============================\n");

    printf("Hasil penjumlahan dari %d + %d + %d adalah : %d\n", a, b, c, jumlah);      // menampilkan penjumlahan
    printf("Hasil pengurangan dari %d - %d - %d adalah : %d\n", a, b, c, pengurangan); // menampilkan pengurangan
    printf("Hasil perkalian dari %d * %d * %d adalah   : %d\n", a, b, c, perkalian);   // menampilkan perkalian
    // Mengecek apakah bilangan kedua dan ketiga bukan nol  dan supaya kalo ga bisa ada komen yang jelas bahawa anda angka 0
    if (b != 0 && c != 0)
        printf("Hasil pembagian dari %d / %d / %d adalah  : %.2f\n", a, b, c, pembagian); // menampilak pembagian
    else
        printf("Hasil pembagian tidak dapat dilakukan (pembagi nol)\n"); // pembagian tidak bisa karna ada angka 0

    printf("Rata-rata dari %d, %d, dan %d adalah       : %.2f\n", a, b, c, rata_rata); // menampilkan rata rata

    return 0; // program  selesai dengan sukses
}
