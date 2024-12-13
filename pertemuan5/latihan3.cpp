#include <iostream>
using namespace std;

int main()
{
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
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan hasil matriks
    cout << "Matriks yang dimasukkan:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    float min = matriks[0][0];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (matriks[i][j] < min)
            {
                min = matriks[i][j];
            }
        }
    }

    float max = matriks[0][0];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (matriks[i][j] > max)
            {
                max = matriks[i][j];
            }
        }
    }

    cout << "Nilai minimal: " << min << endl;
    cout << "Nilai maksimal: " << max << endl;

    return 0;
}
