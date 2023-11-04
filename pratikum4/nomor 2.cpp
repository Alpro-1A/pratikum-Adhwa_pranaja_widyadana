#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nMasukkan tinggi segitiga: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        // Mencetak spasi
        for(int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        // Mencetak bintang
        for(int k = 0; k < (2*i-1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
