#include <iostream>

using namespace std;

// Fungsi untuk mencari nilai tertinggi dan indeksnya dalam array
void cariNilaiTertinggi(int arr[], int ukuranArray, int &nilaiTertinggi, int &indeksTertinggi) {
    nilaiTertinggi = arr[0];
    indeksTertinggi = 0;

    for (int i = 1; i < ukuranArray; ++i) {
        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
            indeksTertinggi = i;
        }
    }
}

int main() {
    int ukuranArray = 5;
    int arr[ukuranArray];

    // Mengisi array dengan nilai dari pengguna
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < ukuranArray; ++i) {
        cout << "Indeks ke-" << i << ": ";
        cin >> arr[i];
    }

    // Variabel untuk menyimpan nilai tertinggi dan indeksnya
    int nilaiTertinggi, indeksTertinggi;

    // Memanggil fungsi untuk mencari nilai tertinggi
    cariNilaiTertinggi(arr, ukuranArray, nilaiTertinggi, indeksTertinggi);

    // Menampilkan hasil
    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;

    if (nilaiTertinggi) {
        cout << "Nilai tersebut ditemukan pada indeks: " << indeksTertinggi << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

    return 0;
}
