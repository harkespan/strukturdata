#include<iostream>

using namespace std;

#define MAX_STACK 5
int top = -1;
int tumpukan[MAX_STACK];


bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if(top==MAX_STACK-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push()
{
    if(!isFull()){
        top++;
        cout<<"Posisi top: "<<top<<endl;
        cout<<"Masukkan data: ";cin>>tumpukan[top];
    }
    else
    {
        cout<<"Stack penuh"<<endl;
    }

}

void pop()
{
    if(!isEmpty())
    {
        tumpukan[top] = NULL;
        top--;
        cout<<"Posisi top: "<<top<<endl;
    }
    else
    {
        cout<<"Stack kosong"<<endl;
    }
}

void cetak()
{
    for(int i = 0;i<=top;i++)
    {
        cout<<tumpukan[i]<<" ";
    }
}

void peek()
{
    if(isEmpty())
    {
        cout<<"Stack kosong"<<endl;
    }
    else
    {
        cout<<tumpukan[top]<<" "<<top<<endl;
    }
}



void menu(int pil){
    switch(pil)
    {
        case 1: push();break;
        case 2: pop();break;
        case 3: cetak();break;
        case 4: peek();break;
        case 0: exit(0);break;
    }
}

int main(){
    int pilih;
    do {
        cout<<endl;
        cout<<"[1] Push"<<endl;
        cout<<"[2] Pop"<<endl;
        cout<<"[3] Print"<<endl;
        cout<<"[4] Peek"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"Pilih Menu: ";
        cin>>pilih;
        menu(pilih);
    }
    while(pilih!=0);
    return 0;
}
