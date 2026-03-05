#include <stdio.h> // Diperlukan untuk fungsi input/output seperti scanf dan printf

#define MAX_N 100 // Mendefinisikan batasan maksimum untuk jumlah mahasiswa. 
                  // Bisa disesuaikan jika N yang diharapkan sangat besar.

int main() {
    int n;           // Deklarasi variabel untuk menyimpan jumlah nilai mahasiswa (n)
    int nilai[MAX_N]; // Deklarasi array untuk menyimpan nilai tugas setiap mahasiswa
    int total_nilai = 0; // Inisialisasi variabel untuk menjumlahkan seluruh nilai, dimulai dari 0
    
    // Membaca nilai n (jumlah mahasiswa) dari input baris pertama
    scanf("%d", &n); 

    // Loop untuk membaca n baris nilai tugas, menyimpannya di array, dan menjumlahkannya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]); // Membaca nilai tugas mahasiswa ke-i
        total_nilai += nilai[i]; // Menambahkan nilai tugas yang baru dibaca ke total_nilai
    }

    // Menghitung nilai rata-rata. Casting (double) pada total_nilai penting 
    // agar hasil pembagian adalah floating point dan bukan integer.
    double rata_rata = (double)total_nilai / n;

    int mahasiswa_geq_rata = 0; // Inisialisasi counter untuk mahasiswa yang nilainya >= rata-rata
    
    // Loop untuk memeriksa setiap nilai mahasiswa apakah lebih besar atau sama dengan rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai[i] >= rata_rata) { // Membandingkan nilai mahasiswa dengan rata-rata yang telah dihitung
            mahasiswa_geq_rata++;   // Jika kondisi terpenuhi, tambahkan counter
        }
    }

    // Menampilkan total seluruh nilai sesuai format yang diminta
    printf("%d\n", total_nilai);

    // Menampilkan nilai rata-rata dengan dua digit angka di belakang koma
    printf("%.2f\n", rata_rata); 
    
    // Menampilkan jumlah mahasiswa yang memiliki nilai lebih besar atau sama dengan rata-rata
    printf("%d\n", mahasiswa_geq_rata);

    return 0; // Menandakan bahwa program berakhir dengan sukses
}