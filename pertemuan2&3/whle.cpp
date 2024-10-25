#include <iostream>
using namespace std;

int main() {
    int nilaiAwal, nilaiAkhir;

    // Meminta input dari user untuk nilai a dan b
    cout << "Masukkan nilai awal: ";
    cin >> nilaiAwal;
    cout << "Masukkan nilai akhir: ";
    cin >> nilaiAkhir;

    // Menggunakan perulangan while untuk mencetak dari a hingga b
    while (nilaiAwal <= nilaiAkhir) {
        cout << nilaiAwal << " ";  // Menampilkan nilai a
        nilaiAwal++;               // Menambahkan a sebesar 1 setiap iterasi
    }

    return 0;
}
