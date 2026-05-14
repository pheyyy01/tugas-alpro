#include <iostream>
using namespace std;

class Bakery {
private:
    int pilihan, jumlah, hargaSatuan;
    int totalHarga, totalSemua = 0;

    string namaRoti;

public:

    // MENU
    void menu() {

        cout << "\n===== TOKO BAKERY =====" << endl;
        cout << "1. Roti Keju   = 12000" << endl;
        cout << "2. Roti Tawar  = 9000" << endl;
        cout << "3. Roti Coklat = 11000" << endl;
        cout << "4. Roti Pisang = 10000" << endl;
        cout << "0. Keluar" << endl;
    }

    // INPUT
    void input() {

        cout << "\nPilih Roti : ";
        cin >> pilihan;

        if (pilihan != 0) {
            cout << "Jumlah Beli : ";
            cin >> jumlah;
        }
    }

    // FUNGSI REKURSIF
    int hitungTotal(int harga, int jumlah) {

        // BASE CASE
        if (jumlah == 0) {
            return 0;
        }

        // REKURSIF
        return harga + hitungTotal(harga, jumlah - 1);
    }

    // PROSES
    bool proses() {

        switch (pilihan) {

            case 1:
                namaRoti = "Roti Keju";
                hargaSatuan = 12000;
                break;

            case 2:
                namaRoti = "Roti Tawar";
                hargaSatuan = 9000;
                break;

            case 3:
                namaRoti = "Roti Coklat";
                hargaSatuan = 11000;
                break;

            case 4:
                namaRoti = "Roti Pisang";
                hargaSatuan = 10000;
                break;

            case 0:
                cout << "\nTerima kasih sudah berbelanja!" << endl;
                return false;

            default:
                cout << "\nPilihan tidak tersedia!" << endl;
                return true;
        }

        // MEMANGGIL REKURSIF
        totalHarga = hitungTotal(hargaSatuan, jumlah);

        // TOTAL SEMUA BELANJA
        totalSemua += totalHarga;

        return true;
    }

    // OUTPUT
    void output() {

        if (pilihan != 0) {

            cout << "\n===== STRUK PEMBELIAN =====" << endl;
            cout << "Nama Roti    : " << namaRoti << endl;
            cout << "Jumlah Beli  : " << jumlah << " biji" << endl;
            cout << "Harga Satuan : " << hargaSatuan << endl;
            cout << "Total Harga  : " << totalHarga << endl;

            cout << "-----------------------------" << endl;
            cout << "Total Semua  : " << totalSemua << endl;
        }
    }
};

int main() {

    Bakery toko;

    bool jalan = true;

    // ITERATIF (DO WHILE)
    do {

        toko.menu();
        toko.input();

        jalan = toko.proses();

        toko.output();

    } while (jalan);

    return 0;
}
