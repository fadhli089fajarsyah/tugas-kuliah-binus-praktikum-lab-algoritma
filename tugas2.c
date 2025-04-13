#include <stdio.h> // inport libary untuk input dan output

int main()
{
    int nilai[5];    // array menyimpan 5 angka
    int *p = nilai;  // pointer p diarahkan ke array nilai
    int i, max, min; // tiga variabel yaitu untuk iterasi, nilai maksimum, dan minimum
    float total = 0; // untuk menyimpan total nilai

    // buat Input nilai secara looping
    for (i = 0; i < 5; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &p[i]);
    }

    max = min = p[0]; // inisialisasi nilai

    for (i = 0; i < 5; i++) // loping untuk mencari max dan min
    {
        if (p[i] > max) // kondisi nilai ke-i lebih besar dari max saat ini
            max = p[i]; // maka update nilai max
        if (p[i] < min) // kondisi jika nilai ke-i lebih kecil dari min saat ini
            min = p[i]; // maka update nilai min
        total += p[i];  // menambah nilai ke-i ke total
    }

    // dari sini sampai  return menampilkan hasilnya dan untuk return 0 itu adalah bahwa kode selesai
    printf("\n ==================hsail perhitungan===================");

    printf("\nhsail nilai tertinggi    : %d\n", max);
    printf("hasil nilai terendah       : %d\n", min);
    printf("hasil nilai rata-rata      : %.2f\n", total / 5);

    return 0;
}
