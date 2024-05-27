#include<iostream>
#include<stdlib.h>

using namespace std;

struct Barang{
    int idBarang;
    string namaBarang;
    int stok;
    long harga;
    
    Barang *next;
};

Barang *newData, *head = NULL, *top = NULL;

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}

void cetak(){
    if(isEmpty()){
        cout<<"List masih kosong"<<endl;
    }
    else{
        system("CLS");
        cout<<"Data Barang :"<<endl;
        cout<<"-------------"<<endl;
        current  = head;
        int i = 1;
        while(current!=NULL){
            cout<<"Barang ke-"<<i<<endl;
            cout<<"Id Barang: "<<current->idBarang<<endl;
            cout<<"Nama Barang: "<<current->namaBarang<<endl;
            cout<<"Stok: "<<current->stok<<endl;
            cout<<"Harga: Rp "<<current->harga<<",00"<<endl;

            current = current->next;
            i++;
        }
    }
}

void buatList(Barang *dataBarang){
    head = dataBarang;
    top = dataBarang;
}

void tambahBelakang(Barang *dataBarang){
    if(isEmpty()){
        buatList(dataBarang);
    }
    else{
        top->next = dataBarang;
        top = dataBarang;
    }
}


void hapusBelakang(){
    if(isEmpty()){
        cout<<"Tidak dapat menghapus top karena list masih kosong"<<endl;
    }
    else{
        if(isSingleNode()){
            head = NULL;
        }
        else{
            Barang *hapus, *current;
            current = head;
            while(current->next!=top){
                current = current->next;
            }

            hapus = top;
            top = current;
            current->next = NULL;
            delete hapus;
        }
        cout<<"Berhasil menghapus top"<<endl;

    }
}

Barang *inputData()
{
    newData = new Barang();
    cout<<"Id barang: ";
    cin>>newData->idBarang;
    cout<<"Nama barang: ";
    cin>>newData->namaBarang;
    cout<<"Stok: ";
    cin>>newData->stok;
    cout<<"Harga: Rp ";
    cin>>newData->harga;
    newData->next = NULL;
    return newData;
}

void aksi(int pilih){
    Barang *inputan;
    int posisi;
    switch(pilih){
        case 0 : cout<<"Terima kasih"<<endl;exit(0);
        case 1 : system("CLS"); 
                cout<<"Push Data"<<endl;
                inputan = inputData();
                tambahBelakang(inputan);break;
        case 2 : system("CLS");
                cout<<"Pop Data"<<endl;
                hapusBelakang();break;
        case 3 : cetak();break;
        case 4 : cout<<"Jumlah data barang: xx"<<endl;break;
        case 5 : cout<<"Masukkan id barang: ";break;
        case 6 : cout<<"Masukkan id barang: ";break;
        default: cout<<"Pilihan "<<pilih<<" belum tersedia"<<endl;
                exit(0);break;
    }
}


int main(){
    int pilih;
    do {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Cetak Stack"<<endl;
        cout<<"4. Jumlah Data"<<endl;
        cout<<"5. Tambah Stok Barang"<<endl;
        cout<<"6. Kurangi Stok Barang"<<endl;
        cout<<"0. Keluar Program"<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pilih;
        aksi(pilih);
    }
    while(pilih!=0);
    return 0;
}

