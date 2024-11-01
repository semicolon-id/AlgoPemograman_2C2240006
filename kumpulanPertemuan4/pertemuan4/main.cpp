#include <iostream>

using namespace std;

int main() {
    int tabel[10] = {0};

    for (int i = 0;  i < 10;i++) {
        cout << "Masukan nilai untuk tabel[" << i << "] : ";
        cin >> tabel[i];
    }

    cout << "isi array tabel : ";

    for (int i = 0; i < 10; i++) {
        cout << tabel[i] << ", ";
    }

    return 0;
}
