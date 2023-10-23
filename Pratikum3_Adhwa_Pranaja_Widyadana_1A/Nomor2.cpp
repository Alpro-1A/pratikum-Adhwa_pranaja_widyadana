#include <iostream>
using namespace std;

int main()
{
    int Angka1, Angka2, Angka3; //deklarasi variabel Angka

    cout << "Masukkan Angka Pertama : "; //input angka1
    cin >> Angka1;

    cout << "Masukkan Angka Kedua : "; //input angka2
    cin >> Angka2;

    cout << "Masukkan angka Ketiga : "; //input angka3
    cin >> Angka3;

    int Angkaterbesar = Angka1; //buat angka 1 menjadi angka terbesar sementara

//jika angka2 lebih besar dari angka terbesar, maka jadikan angka2 menjadi angka terbesar sementara
    if (Angka2 > Angkaterbesar)
    {
        Angkaterbesar = Angka2;
    }
//jika angka3 lebih besar dari angka terbesar, maka jadikan angka3 menjadi angka terbesar
    if (Angka3 > Angkaterbesar)
    {
        Angkaterbesar = Angka3;
    }
    cout << "Angka terbesar di antara ketiga angka yang sudah diinput adalah : " << Angkaterbesar << endl;
    return 0;

}
