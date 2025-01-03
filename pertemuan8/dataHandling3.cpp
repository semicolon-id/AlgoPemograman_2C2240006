#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("bagas.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Bagas Ramadhan Sains Data 2C2240006.\n";
        outFile.close();
        cout << "Data berhasil ditambahkan ke file.\n";
    } else {
        cout << "Gagal membuka file.\n";
    }
    return 0;
}
