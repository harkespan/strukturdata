#include<iostream>
using namespace std;

int main(){
    int var;
    int *ptr;

    var = 10;
    ptr = &var;

    cout<<var<<"\n";
    cout<<*ptr;
}
