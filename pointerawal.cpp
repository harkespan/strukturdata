#include<iostream>
using namespace std;

int main()
{

    //deklarasi variabel pointer
    int var = 20;

    //tipe data pointer dan variabel harus sama
    int *ptr;

    // assign alamat dari variabel ke pointer
    ptr = &var;

    cout << "Nilai pada variabel ptr = " << ptr << "\n";
    cout << "Nilai pada variabel var = " << var << "\n";
    cout << "Nilai pada variabel *ptr = " << *ptr << "\n";

    return 0;
}
