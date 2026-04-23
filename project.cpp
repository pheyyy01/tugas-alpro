#include <iostream>
using namespace std;

class Bakery {
private:
    string namaRoti;
    int jumlah;
    int hargaSatuan;
    int totalHarga;

public:
    // INPUT
    void input() {
        cout << "=== TOKO BAKERY ===" << endl;
        cout << "Masukkan nama roti   : ";
        cin >> namaRoti;
        cout << "Masukkan jumlah beli: ";
        cin >> jumlah;
        cout << "Masukkan harga satuan: ";
        cin >> hargaSatuan;
    }

    // PROSES
    void proses() {
        totalHarga = jumlah * hargaSatuan;
    }

    // OUTPUT
    void output() {
        cout << "\n=== STRUK PEMBELIAN ===" << endl;
        cout << "Nama Roti     : " << namaRoti << endl;
        cout << "Jumlah        : " << jumlah << endl;
        cout << "Harga Satuan  : " << hargaSatuan << endl;
        cout << "Total Harga   : " << totalHarga << endl;
    }
};

int main() {
    Bakery toko;

    toko.input();
    toko.proses();
    toko.output();

    return 0;
}
