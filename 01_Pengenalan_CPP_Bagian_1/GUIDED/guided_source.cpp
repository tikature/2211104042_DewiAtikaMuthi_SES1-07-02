/* Soal 1: Kalkulator Sederhana*/

#include <iostream>
using namespace std;

int main()

{
    float bil1, bil2;

    cout << "Masukkan dua bilangan: ";
    cout << endl;
    cout << "Bil 1 = ";
    cin >> bil1;
    cout << "Bil 2 = ";
    cin >> bil2;

    cout << "Hasil penjumlahan: " << bil1 + bil2 << endl;
    cout << "Hasil pengurangan: " << bil1 - bil2 << endl;
    cout << "Hasil perkalian: " << bil1 * bil2 << endl;
    if (bil2 != 0) {
        cout << "Hasil pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Pembagian tidak dapat dilakukan (pembagi nol)" << endl;
    }

    return 0;
}

/* Soal 2. Konversi Angka ke Tulisan*/

#include <iostream>

using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat",
    "lima", "enam", "tujuh", "delapan", "sembilan"};
string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas",
    "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

string angkaKeTulisan(int num) {
    if (num == 0) return "nol";
    else if (num < 10) return satuan[num];
    else if (num < 20) return belasan[num - 10];
    else if (num < 100) return satuan[num / 10] + " puluh " + satuan[num % 10];
    else if (num == 100) return "seratus";
    else return "Angka di luar jangkauan";
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << ": " << angkaKeTulisan(angka) << endl;
    } else {
        cout << "Angka di luar jangkauan." << endl;
    }

    return 0;
}

/* Soal 3. Pola Menggunakan Perulangan*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Cetak angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Cetak tanda *
        cout << "* ";

        // Cetak angka menaik
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}


