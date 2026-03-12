#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n;       // Membuat variable inputan n

void input()
{ // Prosedure Input
    while (true)
    {
        cout << "Masukkan Jumlah data pada Array : "; // Membuat inputan jumlah element Array
        cin >> n;                                     // Memanggil variable n

        if (n <= 20)
        { // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray tidak boleh lebih dari 20\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                             // Membuat jarak  per baris program
    cout << "===========================================" << endl; // membuattampilan tersusun data element array
    cout << "============Masukkan Elemet Array==========" << endl;
    cout << "===========================================" << endl;

    