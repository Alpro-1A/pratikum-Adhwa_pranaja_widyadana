#include <iostream>
#include <vector>
using namespace std;

void faktor(int num) //fungsi faktor
{
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int batas;
    cout << "=========================================================";
    cout << "\n                         PROGRAM                       \n";
    cout << "---------------------------------------------------------\n\n";
    cout << "Masukkan batas: ";
    cin >> batas;
    cout << "\n";

    //deklarasi variabel
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    //menghitung bilangan ganjil
    cout << "Bilangan Ganjil dari 1 sampai "<<batas << " adalah : ";
    for (int i = 1; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGanjil += i;
    }
    cout << endl;

    //menghitung bilangan genap
    cout << "Bilangan Genap dari 1 sampai "<<batas << " adalah : ";
    for (int i = 2; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

    //menghitung bilangan prima
    cout << "Bilangan Prima dari 1 sampai "<<batas << " adalah : ";
    for (int i = 2; i <= batas; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

    //menampilkan jumlah bilangan ganjil
    cout << "\n\nJumlah Bilangan Ganjil dari 1 sampai " << batas <<" : " << jumlahGanjil << endl;
    //menampilkan jumlah bilangan Genap
    cout << "Jumlah Bilangan Genap dari 1 sampai "<< batas <<" : "  << jumlahGenap << endl;
    //menampilkan jumlah bilangan Prima
    cout << "Jumlah Bilangan Prima dari 1 sampai "<< batas <<" : " << jumlahPrima << endl;

    //faktor dari jumlah bilangan ganjil
    cout << "\n\nFaktor dari Jumlah Bilangan Ganjil: " << ends;
    faktor(jumlahGanjil);
    //faktor dari jumlah bilangan genap
    cout << "Faktor dari Jumlah Bilangan Genap: " << ends;
    faktor(jumlahGenap);
    //faktor dari jumlah bilangan prima
    cout << "Faktor dari Jumlah Bilangan Prima: " << ends;
    faktor(jumlahPrima);


    cout << "=========================================================";
    return 0;
}
