#include <iostream>
using namespace std;

int main()
{
    // proses inputan user
    int barisA, kolomA, barisB, kolomB;

    cout << "Masukkan jumlah baris A: ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom A: ";
    cin >> kolomA;

    cout << "Masukkan jumlah baris B: ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom B: ";
    cin >> kolomB;

    // Deklarasi matriks
    int matriksA[barisA][kolomA],
        matriksB[barisB][kolomB];

        if (matriksA[barisA][kolomA] != matriksB[barisB][kolomB]){
        cout << "Matriks A dan matriks B harus memiliki ukuran yang sama!" << endl;
        return 1;
    }

    // Proses pembuatan matriks A
    cout << "Masukkan elemen matriks A:\n";
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matriksA[i][j];
        }
    }

    // Proses pembuatan matriks B
    cout << "Masukkan elemen matriks B:\n";
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matriksB[i][j];
        }
    }

    cout << "Matriks yang dimasukkan:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriks yang dimasukkan:\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
