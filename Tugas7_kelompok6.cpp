#include <iostream>
#include <string>

using namespace std;

// Definisi struktur untuk kendaraan motor
struct Motor {
    string jenis;
    string merek;
    string warna;
    string bahanBakar;
    string nomorPolisi;
};

// Fungsi untuk menampilkan data kendaraan
void tampilkanData(const Motor& kendaraan) {
    cout << "Jenis: " << kendaraan.jenis << endl;
    cout << "Merek/Type: " << kendaraan.merek << endl;
    cout << "Warna: " << kendaraan.warna << endl;
    cout << "Bahan Bakar: " << kendaraan.bahanBakar << endl;
    cout << "Nomor Polisi: " << kendaraan.nomorPolisi << endl;
    cout << endl;
}

int main() {
    const int maksJumlahKendaraan = 10;
    Motor dataKendaraan[maksJumlahKendaraan];
    int jumlahKendaraan = 0;

    while (true) {
        cout << "Menu:\n"
             << "1. Tambah Data\n"
             << "2. Tampilkan Data\n"
             << "3. Hapus Data\n"
             << "4. Update Data\n"
             << "0. Keluar\n";

        int pilihan;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan newline dari buffer

        switch (pilihan) {
            case 1: // Tambah Data
                if (jumlahKendaraan < maksJumlahKendaraan) {
                    cout << "Data Kendaraan ke-" << jumlahKendaraan + 1 << ":" << endl;
                    cout << "Jenis Kendaraan: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].jenis);

                    cout << "Merek/Type: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].merek);

                    cout << "Warna Kendaraan: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].warna);

                    cout << "Bahan Bakar: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].bahanBakar);

                    cout << "Nomor Polisi: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].nomorPolisi);

                    ++jumlahKendaraan;
                } else {
                    cout << "Maaf, sudah mencapai batas maksimal kendaraan.\n";
                }
                break;

            
