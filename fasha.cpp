#include <iostream>
#include <fstream>  // Untuk bekerja dengan file
using namespace std;

int main() {
    int usia;
    string nama ;

    // Input data pengguna
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan usia: ";
    cin >> usia;

    // Proses pengecekan apakah usia >= 17
    ofstream fileOutput("hasil_ktp.txt");  // Membuka file untuk output

    if (usia >= 17) {
        cout << "Anda sudah memiliki KTP." << endl;
        fileOutput << nama << " sudah memiliki KTP." << endl;  // Menulis ke file
    } else {
        cout << "Anda belum memiliki KTP." << endl;
        fileOutput << nama << " belum memiliki KTP." << endl;  // Menulis ke file
    }

    // Menutup file
    fileOutput.close();

    return 0;
}