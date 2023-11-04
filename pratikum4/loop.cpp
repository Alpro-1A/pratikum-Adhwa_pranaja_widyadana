#include <iostream>
using namespace std;

int main (){
for (int i ; i < 10 ; i++){
        if (i%2 !=0)
    cout << "Anka ganjil "<< i << endl;
}

/*int angka;
do {
    cout << "masukkan bilangan bulat positif : ";
    cin >> angka;

    if (angka <=0){
        cout << "Bilangan bulat harus positif";
    }

}while (angka <= 0);*/
 /*int angka ;
 cout << "Masukkan jumlah " ;
 cin >> angka;
 for (int i = 0 ; i <= angka ; i++){
    for (int j = angka ; j > i; j--){
        cout << "*";
    }
    cout << endl;
 }*/

  int n;
    cout << "Masukkan tinggi segitiga: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // Mencetak spasi
        for(int j = 0; j < n-i; j++) {
            cout << " ";
        }
        // Mencetak bintang
        for(int k = 0; k < (2*i-1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
