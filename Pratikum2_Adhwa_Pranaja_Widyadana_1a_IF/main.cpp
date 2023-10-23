#include <iostream>

using namespace std;
int main()
{
    /*cout<< "Masukkan Nama Anda : ";
    cin >> Nama;
    cout<< "Masukkan NPM Anda : ";
    cin >> npm;
    cout<< "Anda semester berapa : ";
    cin >> semester;
    cout << "Nama saya adalah : " << Nama<<"\n" <<endl;
    cout << "NPM Saya : " << npm<<"\n" <<endl;
    cout << "Saya Semester: " << semester<<"\n" <<endl;
    cout<< "-----------------------------"<<endl;*/

    /*int a,b;
    a = 10;
    b = 12;

    cout << "a+b : " << (a+b) << endl;
    cout << "a-b : " << (a-b) << endl;
    cout << "a*b : " << (a*b) << endl;
    cout << "a/b : " << (a/b) << endl;
    cout << "a%b : " << (a%b) << endl;

    int keliling,panjang,lebar;*/

    /*int c,d,e;
    c=10;
    d=c++;
    e=++d;
    cout << e <<endl;*/

    /*int a, b;
    a = 3;
    b = 5;
    bool result;
    result = (a == b); // false
    cout << "3 == 5 is\\ " << result << endl;
    result = (a != b); // true
    cout << "3 != 5 is " << result << endl;
    result = a > b; // false
    cout << "3 > 5 is " << result << endl;
    result = a < b; // true
    cout << "3 < 5 is " << result << endl;
    result = a >= b; // false
    cout << "3 >= 5 is " << result << endl;
    result = a <= b; // true
    cout << "3 <= 5 is " << result << endl;*/

    //soal Nomor 1 dengan variabel tambahan

    cout << "Nomor 1 dengan variabel tambahan\n"<<endl;
    int firstValue,SecondValue,sementara;
    firstValue = 10;
    SecondValue = 8;

    cout << "Nilai awal firstValue adalah : " << firstValue << endl;
    cout << "Nilai awal secondValue adalah : " << SecondValue <<"\n\n"<< endl;
    sementara = firstValue;
    firstValue = SecondValue;
    SecondValue = sementara;

    cout << "Nilai firstValue sekarang adalah : " << firstValue << endl;
    cout << "Nilai secondValue sekarang adalah : " << SecondValue << endl;

    //nomor 1 tanpa variabel tambahan
    cout << "\nNomor 1 tanpa variabel tambahan\n"<<endl;
    int nilai1,nilai2;
    nilai1 = 10;
    nilai2 = 8;

    cout << "Nilai awal firstValue adalah : " << nilai1 << endl;
    cout << "Nilai awal secondValue adalah : " << nilai2 <<"\n\n"<< endl;

    nilai1 = nilai1 ^ nilai2;
    nilai2 = nilai1^ nilai2;
    nilai1= nilai1 ^ nilai2;


    cout << "Nilai firstValue sekarang adalah : " << nilai1 << endl;
    cout << "Nilai secondValue sekarang adalah : " << nilai2 << endl;

    //nomor 2
cout << "\n--------------------------------------";
    cout << "\nNomor 2\n";
    int n,m,bagi,sisa;

    cout << "Masukkan jumlah bebek : ";
    cin >> n;
    cout << "Masukkan jumlah teman : ";
    cin >> m;

    bagi = n / m;
    sisa = n % m;

    cout << "Setiap teman akan mendapatkan " << bagi << " ekor bebek" << endl;
    cout << "Sisa bebek yang tidak terbagi adalah " << sisa << " ekor" << endl;

    return 0;
}
