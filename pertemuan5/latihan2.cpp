#include <iostream>
using namespace std;

int main() {
    // proses inputan user
    int baris, kolom;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Deklarasi matriks
    int matriks[baris][kolom];

    // Proses pembuatan matriks
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan hasil matriks
    cout << "Matriks yang dimasukkan:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    // Menghitung total elemen matriks
    int total = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            total += matriks[i][j];
        }
    }

    cout << "Jumlah matriks yang dimasukkan: " << baris * kolom << endl;
    cout << "Total elemen matriks: " << total << endl;

    return 0;
}