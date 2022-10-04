#include<iostream>
#include<string>

using namespace std;

string dibalik(string);

int main(){
    string kata;
    cout<<"Masukkan kata: ";
    cin>>kata;
    cout<<dibalik(kata);
    return 0;
}

string dibalik(string sss){
    string hasilbalik = "";
    for(int i = sss.length();i >=0; i--){
        hasilbalik.insert(hasilbalik.end(),sss[i]);
    }
    return hasilbalik;
}
