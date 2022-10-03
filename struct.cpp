#include<iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    float ipk;
}mhs;

int main(){
    mahasiswa mhs1;
    mhs1.nim="A11.2000.00003";
    mhs1.nama="John Doe";
    mhs1.ipk = 3.4;

    cout<<mhs1.nim<<"\n";
    mhs.nama="Jojo";
    cout<<mhs.nama;
    return 0;
}
