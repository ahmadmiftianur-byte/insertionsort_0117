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

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Memasukan atau menginputkan nilai data n
        cin >> arr[i];                         // Menyimpan nilai data n kedalam array arr
    }
}

void insertionSort()
{             // Prosedure InsertionSort
    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j;    // Membuat variable j sebagai penanda

    for (int i = 0; i < n ; i++)
    {                  // step 1
        temp = arr[i]; // step 2
        j = i - 1;     // step 3

        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j--;                 // step 4b
        }
        arr[j + 1] = temp; // step 5
        cout << "\nstep " << i << ": "; // Output step ke layar
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // Output ke layar
        }
    }
}

void display()
{
    cout << endl; // Output baris kosong
    cout << "\n================================" << endl;
    cout << "\nElement Array yang telah tersusun" << endl; // Output ke layar
    cout << "\n================================" << endl;  // Output ke layar

    for (int j = 0; j < n; j++)
    {                           // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // output ke layar
    }
    cout << endl; // Output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");   
}