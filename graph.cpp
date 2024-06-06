#include<iostream>
using namespace std;

struct Graf{
    char data;
    Graf *left;
    Graf *right;
};

Graf *P, *awal, *akhir, *PVertex, *PEdge, *Q, *R, *S;
Graf *titik[5];

int main(){
    int a[5][5] =  {0,5,0,2,0, 6,0,3,0,0, 0,0,0,0,9, 0,0,12,0,7,0,14,0,0,0};
    char nm[6] = "ABCDE";

    int i = 0,j = 0;

    P = new Graf();
    P->data = nm[0];
    awal = P;
    akhir = P;
    P->left = NULL;
    P->right = NULL;
    titik[0] = P;
    cout<<"node: "<<P->data<<" pada alamat: "<<titik[0]<<endl;

    for(i=1;i<=4;i++)
    {
        P = new Graf();
        P->data = nm[i];
        akhir->left = P;
        akhir = akhir->left;
        P->left = NULL;
        P->right = NULL;
        titik[i] = P;
        cout<<"node: "<<P->data<<" pada alamat: "<<titik[0]<<endl;
    }



}
