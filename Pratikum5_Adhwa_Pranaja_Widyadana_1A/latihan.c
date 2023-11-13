#include <iostream>

using namespace std;

string nilaiAkhir(int nilai){
switch (nilai)
    {
    case 90 ... 100: //jika nilai 90 sampai 100 maka nilainya a
        cout << "Selamat! anda mendapatkan nilai A." << endl;
        break;
    case 80 ... 89: //jika nilai 80 sampai 89 maka nilainya b
        cout << "Anda mendapatkan nilai B. " << endl;
        break;
    case 70 ... 79: //jika nilai 70 sampai 79 maka nilainya c
        cout << "Anda mendapatkan nilai C. " << endl;
        break;
    case 60 ... 69: //jika nilai 60 sampai 69 maka nilainya d
        cout << "Anda mendapatkan nilai D. " << endl;
        break;
    default: //jika nilai kurang dari 60/tidak ada yang sesuai, secara otomatis nilainya e
        cout << "Anda mendapatkan nilai E" << endl;
        break;
    }
    return 0;

}
int main ()
{
    cin >> nilai; // input variabel nilai
nilaiAkhir (100);
return 0;
}


