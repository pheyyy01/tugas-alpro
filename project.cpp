#include <iostream>
using namespace std;

class Bakery {
private:
    int pilihan;
    string namaRoti;
    int jumlah;
    int hargaSatuan;
    int totalHarga;

public:
    // INPUT
    void input() {
        cout << "\n=== TOKO BAKERY ===" << endl;
        cout << "Pilih roti:" << endl;
        cout << "1. Roti Keju   (12000)" << endl;
        cout << "2. Roti Tawar  (9000)" << endl;
        cout << "3. Roti Coklat (11000)" << endl;
        cout << "4. Roti Pisang (10000)" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan != 0) {
            cout << "Masukkan jumlah beli: ";
            cin >> jumlah;
        }
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
                cout << "\nTerima kasih, program selesai ??" << endl;
                return false; // keluar dari program
            default:
                cout << "Pilihan tidak valid!" << endl;
                return true;
        }

        totalHarga = jumlah * hargaSatuan;
        return true;
    }

    // OUTPUT
    void output() {
        if (pilihan != 0 && hargaSatuan != 0) {
            cout << "\n=== STRUK PEMBELIAN ===" << endl;
            cout << "Nama Roti     : " << namaRoti << endl;
            cout << "Jumlah        : " << jumlah << endl;
            cout << "Harga Satuan  : " << hargaSatuan << endl;
            cout << "Total Harga   : " << totalHarga << endl;
            
            cout<<"\n========================="<<endl;
        }
    }
};

int main() {
    Bakery toko;
    bool jalan = true;

    do {
        toko.input();
        jalan = toko.proses();
        toko.output();
    } while (jalan);

    return 0;
}
