#include <iostream>

using namespace std;

int main () {
    //deklarasi variabel
int pilihan;
float alas, tinggi, panjang, lebar, luas;

//membuat opsi bangun yang akan dihitung luasnya
cout << "Pilih bentuk yang ingin dihitung luasnya :" << endl;
cout << "1. Persegi"<< endl;
cout << "2. Persegi Panjang" << endl;
cout << "3. Segitiga\n\n\n" << endl;
cout << "Masukkan pilihan (1-3) : ";
cin >> pilihan;

//membuat switch yang didalamnya terdapat rumus luas bangun datar
switch (pilihan){
    //luas persegi
case 1:
    cout << "Masukkan panjang sisi : ";
    cin >> panjang;
    luas = panjang * panjang;
    cout << "Luas Persegi adalah : "<< luas << endl;
    break;
    //luas persegi panjang
case 2 :
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar :";
    cin >> lebar;
    luas = panjang * lebar;

    cout << "Luas Persegi Panjang : "<< luas <<endl;
    break;
    //luas segitiga
case 3:
    cout << "Masukkan Alas : ";
    cin >> alas;
    cout << "Masukkan Tinggi : ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;

    cout << "Luas Segitiga : " << luas << endl;
    break;
default:
    cout << "Pilihan tidak valid." << endl;
    break;
}
return 0;
}
