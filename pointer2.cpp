#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int angka = 10;
    int *pangka=&angka;
    int *x;
    char *nama;

    strcpy(nama,"Henry");

    cout<<*pangka<<"\n";
    cout<<x<<"\n";
    cout<<nama;


}
