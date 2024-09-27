#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string p;
    int c = 21;
    float des = 3.9;
    bool s = true;
    char jk = 'P';

    cout << "Masukkan nama anda: ";
    cin >> p;
    cout << "Hallo selamat datang " << p << "! Kamu berumur " << c
    << " tahun dengan JK : " << jk << endl << endl;


    /*  input cin */

    int angka;

    cout << "Masukkan Angka: ";
    cin >> angka;
    cout << "Angka yang anda masukkan: " << angka << endl << endl;

    getch();

    /* operasi aritmatika*/

    int ang1 = 20;
    int ang2 = 2;

    int hasilkali = ang1*ang2;
    int hasiltambah = ang1+ang2;
    int sisa = ang1%ang2;
    bool tf  = (ang1 == ang2);


    cout << "Jika  " << ang1 << " x " << ang2 << " = " << hasilkali << endl;
    cout << "Jika " << ang1 << " + " << ang2 <<  " = " << hasiltambah << endl;
    cout << "Sisa hasil bagi " << ang1 << " oleh " << ang2 << " = " << sisa << endl;
    cout << "Hasilnya adalah " << boolalpha << tf << endl << endl;


    /* operasi logika */

    bool kon1 = true;
    bool kon2 = true;

    bool hasil = (kon1 && kon2);
    bool hasiln1 = !kon1;
    bool hasiln2 = !kon2;

    cout << "K1 = " << kon1 << " dan K2 = " << kon2 << endl;
    cout << "Jika NOT, K1 = " << hasiln1 << " dan K2 = " <<hasiln2 <<endl;
    cout << "Hasil logika AND: " << boolalpha << hasil << endl << endl;

    /* percabangan if-else */

    string kataa;
    cout << "Masukkan kata = kinder" << endl;
    cout << "Input: ";
    cin >> kataa;

    if(kataa == "kinder") {
        cout << "p: Kata sesuai" <<endl;
    } else {
        cout << "p: kata tidak sesuai" << endl << endl;
    }

    /* operasi switch case */

    int tv;
    cout << "Daftar channel TV " << endl;
    cout << "1. RCTI" << endl ;
    cout << "2. TransTV" << endl ;
    cout << "3. SCTV" << endl ;

    cout << "Masukkan channel pilihan: " ;
    cin >> tv;

    switch (tv) {
        case 1:
    cout << "Channel yang anda pilih RCTI " << endl;
    break;
        case 2:
    cout << "Channel yang anda pilih TransTV " << endl;
    break;
        case 3:
    cout << "Channel yang anda pilih SCTV " << endl;
    break;
        default:
    cout << "channel tidak tersedia" << endl;
    }

    /* looping*/


    for (int i=0; i<5; i++){
        cout << 1+i << ". Flushy" << endl;
    }

}

