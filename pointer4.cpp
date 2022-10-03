#include<iostream>
using namespace std;

int main()
{
    int var = 20;
    int *par = &var;
    int **psr = &par;


    cout<<par<<endl;
    cout<<psr<<endl;
}
