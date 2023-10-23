#include <iostream>

using namespace std;

int main (){
int nilai;
cout << "Masukkan nilai yang anda dapat : ";
cin >> score;
switch (nilai){
case 90 ... 100:
    cout << "Selamat! anda mendapatkan nilai A." << endl;
    break;
case 80 ... 89:
    cout << "Anda mendapatkan nilai B. " << endl;
    break;
case 70 ... 79:
    cout << "Anda mendapatkan nilai C. " << endl;
    break;
case 60...69:
    cout << "Anda mendapatkan nilai D. " << endl;
    break;
case nilai<60:
    cout << "Anda mendapatkan nilai E " << endl;
    break;
default:
    cout << "Nilai yang anda masukkan tidak valid" << endl;
    break;
}
return 0;
}

