#include <iostream>
using namespace std;

int main(){
    int i, j;
    int arr[] = {2,3,4};
    int n = sizeof(arr)/sizeof(int);

    for(i=0;i<n;i++){
        for(j=(i+1);j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }

    return 0;
}
