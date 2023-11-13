#include <iostream>
#include <vector>
using namespace std;

int batas;
int jumlahPrima = 0;
int jumlahGanjil = 0;
int jumlahGenap = 0;
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
void hitungganjil ()
{

    cout << "Bilangan Ganjil dari 1 sampai "<<batas << " adalah : ";
    for (int i = 1; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGanjil += i;
    }
    cout << endl;

}

void hitunggenap(){

 cout << "Bilangan Genap dari 1 sampai "<<batas << " adalah : ";
    for (int i = 2; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;



}

void hitungPrima(){

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

}
int main()
{

    cout << "=========================================================";
    cout << "\n                         PROGRAM                       \n";
    cout << "---------------------------------------------------------\n\n";
    cout << "Masukkan batas: ";
    cin >> batas;
    cout << "\n";

    hitungganjil();
    hitunggenap();
    hitungPrima();
    cout << "\n\nJumlah Bilangan Ganjil dari 1 sampai " << batas <<" : " << jumlahGanjil << endl;
    cout << "Jumlah Bilangan Genap dari 1 sampai "<< batas <<" : "  << jumlahGenap << endl;
    cout << "Jumlah Bilangan Prima dari 1 sampai "<< batas <<" : " << jumlahPrima << endl;
    cout << "\n\nFaktor dari Jumlah Bilangan Ganjil: " << ends;
    faktor(jumlahGanjil);
    cout << "Faktor dari Jumlah Bilangan Genap: " << ends;
    faktor(jumlahGenap);
    cout << "Faktor dari Jumlah Bilangan Prima: " << ends;
    faktor(jumlahPrima);

    cout << "=========================================================";
    return 0;
}

