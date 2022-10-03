#include<iostream>
using namespace std;

int main()
{
    int a[] = {4,5,3,6};
    int *ptr;

    ptr = a;
    for(int i=0;i<4;i++)
    {
        cout<<ptr<<"\n";
    }
}
