#include <stdio.h> // Diperlukan untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Diperlukan untuk INT_MAX dan INT_MIN agar bisa mencari min/max dengan aman

#define MAX_N 100 // Mendefinisikan batasan maksimum untuk jumlah mahasiswa.
                  // Ini berguna untuk mendeklarasikan ukuran array.

int main() {
    int n;           // Variabel untuk menyimpan jumlah mahasiswa
    int nilai[MAX_N]; // Array untuk menyimpan nilai tugas setiap mahasiswa
    int total_nilai = 0; // Variabel untuk menjumlahkan seluruh nilai
    int nilai_maksimum = INT_MIN; // Inisialisasi dengan nilai terkecil mungkin untuk mencari maksimum
    int nilai_minimum = INT_MAX;  // Inisialisasi dengan nilai terbesar mungkin untuk mencari minimum
    
    // 1. Membaca nilai n (jumlah mahasiswa)
    scanf("%d", &n); 

    // 2. Loop untuk membaca n baris nilai tugas, menyimpannya, dan melakukan perhitungan awal
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]); // Membaca nilai tugas mahasiswa ke-i
        total_nilai += nilai[i]; // Menambahkan nilai ke total

        // Memperbarui nilai maksimum jika nilai saat ini lebih besar
        if (nilai[i] > nilai_maksimum) {
            nilai_maksimum = nilai[i];
        }
        // Memperbarui nilai minimum jika nilai saat ini lebih kecil
        if (nilai[i] < nilai_minimum) {
            nilai_minimum = nilai[i];
        }
    }

    // 3. Menghitung nilai rata-rata
    // Casting (double) pada total_nilai sangat penting agar hasil pembagian
    // adalah bilangan floating point dan bukan bilangan bulat.
    double rata_rata = (double)total_nilai / n;

    int mahasiswa_geq_rata = 0; // Variabel untuk menghitung mahasiswa yang nilainya >= rata-rata
    
    // 4. Loop kedua untuk menghitung jumlah mahasiswa yang nilainya >= rata-rata
    // Kita perlu loop terpisah karena rata-rata baru bisa dihitung setelah semua nilai dibaca.
    for (int i = 0; i < n; i++) {
        if (nilai[i] >= rata_rata) { // Membandingkan nilai mahasiswa dengan rata-rata
            mahasiswa_geq_rata++;   // Jika kondisi terpenuhi, tambahkan counter
        }
    }

    // 5. Menghitung rentang nilai (range)
    int rentang_nilai = nilai_maksimum - nilai_minimum;

    // 6. Menampilkan hasil sesuai format yang diminta
    printf("%d\n", total_nilai);          // Output total nilai
    printf("%.2f\n", rata_rata);          // Output rata-rata dengan 2 digit presisi
    printf("%d\n", mahasiswa_geq_rata);   // Output jumlah mahasiswa >= rata-rata
    printf("%d\n", rentang_nilai);        // Output rentang nilai

    return 0; // Menandakan bahwa program berakhir dengan sukses
}