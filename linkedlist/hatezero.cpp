#include<iostream>

using namespace std;

struct Zero {
    int angka;
    Zero *next;
};

Zero *head = NULL, *top = NULL;

void inputData(int data)
{
    Zero *newData = new Zero();
    newData->angka = data;
    newData->next = NULL;
    if(data == 0)
    {
        head = NULL;
        top = NULL;
    }
    else
    {
        top->next = newData;
        top = newData;
    }
}

void cetak(){
    if(head == NULL){
        cout<<"List masih kosong"<<endl;
    }
    else{
        Zero *current;
        current  = head;
        int i = 1;
        while(current!=NULL){
            cout<<current->angka<<" ";
            current = current->next;
            i++;
        }
    }
}

int main()
{
    int a,b,c,d;
    cout<<"input angka: ";
    cin>>a;
    cout<<"input angka: ";
    cin>>b;
    cout<<"input angka: ";
    cin>>c;
    cout<<"input angka: ";
    cin>>d;
    inputData(a);
    inputData(b);
    inputData(c);
    inputData(d);

    cetak();
}
