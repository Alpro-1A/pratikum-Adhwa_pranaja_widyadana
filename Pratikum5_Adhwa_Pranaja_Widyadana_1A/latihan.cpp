#include <iostream>

using namespace std;

/*int nilai;

void nilaiAkhir(){
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

}
int main ()
{
    do{
        cin>>nilai;  // input variabel nilai
   nilaiAkhir();
   cout << nilaiAkhir(69) <<end;
    }


//nilaiAkhir ();
return 0;
}*/
int jumlah(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return n * jumlah(n - 1); //REKURSI
    }
}
int main()
{
    int angka;
    cout << "Masukkan sebuah angka positif: ";
    cin >> angka;
    if (angka <= 0)
    {
        cout << "Masukkan angka positif.\n";
    }
    else
    {
        int hasil = jumlah(angka);
        cout << "Jumlah angka dari 1 hingga " << angka << " adalah: " << hasil << endl;
    }
    return 0;
}



