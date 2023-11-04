#include<iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, angkaselanjutnya = 0;

    cout << "Masukkan jumlah suku: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) //Loop ini berjalan sampai n.

    {
        // Jika i adalah 1, cetak t1
        if(i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        // Jika i adalah 2, cetak t2
        if(i == 2)
        {
            cout << t2 << ",";
            continue;
        }
        angkaselanjutnya = t1 + t2; //Menghitung suku berikutnya.
        t1 = t2; //Memperbarui nilai t1.
        t2 = angkaselanjutnya; //Memperbarui nilai t2.

        cout << angkaselanjutnya << ", ";  //Ini mencetak suku berikutnya.

    }
    return 0;
}

