#include <stdio.h> // Diperlukan untuk fungsi input/output seperti scanf dan printf

int main() {
    int n;           // Deklarasi variabel untuk menyimpan jumlah nilai mahasiswa (n)
    int nilai;       // Deklarasi variabel untuk menyimpan nilai tugas setiap mahasiswa
    int total_nilai = 0; // Inisialisasi variabel untuk menjumlahkan seluruh nilai, dimulai dari 0
    
    // Membaca nilai n (jumlah mahasiswa) dari input baris pertama
    scanf("%d", &n); 

    // Loop untuk membaca n baris nilai tugas dan menjumlahkannya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai); // Membaca nilai tugas mahasiswa ke-i
        total_nilai += nilai; // Menambahkan nilai tugas ke total_nilai
    }

    // Menghitung nilai rata-rata. Penting: gunakan (double) untuk memastikan hasil pembagian adalah floating point.
    double rata_rata = (double)total_nilai / n;

    // Menampilkan total seluruh nilai sesuai format yang diminta
    printf("%d\n", total_nilai);

    // Menampilkan nilai rata-rata dengan dua digit angka di belakang koma
    printf("%.2f\n", rata_rata); 

    return 0; // Menandakan bahwa program berakhir dengan sukses
}