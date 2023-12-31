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
    string tahunkendaraan;
};

// Fungsi untuk menampilkan data kendaraan
void tampilkanData(const Motor& kendaraan) {
    cout << "Jenis: " << kendaraan.jenis << endl;
    cout << "Merek/Type: " << kendaraan.merek << endl;
    cout << "Warna: " << kendaraan.warna << endl;
    cout << "Bahan Bakar: " << kendaraan.bahanBakar << endl;
    cout << "Nomor Polisi: " << kendaraan.nomorPolisi << endl;
    cout << "Tahun Kendaraan: " << kendaraan.tahunkendaraan << endl;
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
                    
                    cout << "Tahun Kendaraan: ";
                    getline(cin, dataKendaraan[jumlahKendaraan].tahunkendaraan);

                    ++jumlahKendaraan;
                } else {
                    cout << "Maaf, sudah mencapai batas maksimal kendaraan.\n";
                }
                break;
                
                case 2: // Tampilkan Data
                cout << "Data Kendaraan Motor:" << endl;
                for (int i = 0; i < jumlahKendaraan; ++i) {
                    cout << "Kendaraan ke-" << i + 1 << ":" << endl;
                    tampilkanData(dataKendaraan[i]);
                }
                break;

            case 3: // Hapus Data
                if (jumlahKendaraan > 0) {
                    int indeksHapus;
                    cout << "Masukkan indeks kendaraan yang akan dihapus (1 - " << jumlahKendaraan << "): ";
                    cin >> indeksHapus;

                    if (indeksHapus >= 1 && indeksHapus <= jumlahKendaraan) {
                        // Geser elemen-elemen setelah indeksHapus ke kiri
                        for (int i = indeksHapus - 1; i < jumlahKendaraan - 1; ++i) {
                            dataKendaraan[i] = dataKendaraan[i + 1];
                        }

                        --jumlahKendaraan;
                        cout << "Data kendaraan berhasil dihapus.\n";
                    } else {
                        cout << "Indeks tidak valid.\n";
                    }
                } else {
                    cout << "Tidak ada data kendaraan untuk dihapus.\n";
                }
                break;
                
                case 4: // Update Data
                if (jumlahKendaraan > 0) {
                    int indeksUpdate;
                    cout << "Masukkan indeks kendaraan yang akan diupdate (1 - " << jumlahKendaraan << "): ";
                    cin >> indeksUpdate;

                    if (indeksUpdate >= 1 && indeksUpdate <= jumlahKendaraan) {
                        cout << "Data Kendaraan ke-" << indeksUpdate << ":" << endl;
                        cout << "Jenis Kendaraan: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].jenis);

                        cout << "Merek/Type: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].merek);

                        cout << "Warna Kendaraan: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].warna);

                        cout << "Bahan Bakar: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].bahanBakar);

                        cout << "Nomor Polisi: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].nomorPolisi);
                        
                        cout << "Tahun Kendaraan: ";
                        getline(cin, dataKendaraan[indeksUpdate - 1].tahunkendaraan);


                        cout << "Data kendaraan berhasil diupdate.\n";
                    } else {
                        cout << "Indeks tidak valid.\n";
                    }
                } else {
                    cout << "Tidak ada data kendaraan untuk diupdate.\n";
                }
                break;

            case 0: // Keluar
                cout << "Program selesai.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
    }

    return 0;
}

            
