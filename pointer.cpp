#include<iostream>
#include<cstring>
using namespace std;

struct pekerja{
    int id;
    char nama[20];
}emp;
int main()
{
    struct pekerja data;
    struct pekerja *pdata;    //create a pointer of structure type
    pdata=&data;     //assign address to pointer of structure type

    strcpy(pdata->nama, "Adi");
    pdata->id = 1;

    printf("%d %s", pdata->id,pdata->nama);
    return 0;
}
