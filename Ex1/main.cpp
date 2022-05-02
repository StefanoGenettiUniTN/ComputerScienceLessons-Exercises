#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int vet[10]={ 5, 6, 44, -11, 3, 5, 66, -1, -11, 3};

    cout<<"Output 1:"<<endl;
    cout<<vet[4]<<endl;

    cout<<"Output 2:"<<endl;
    for(int i=3; i<10; i=i+2){
        cout<<vet[i]<<"\t";
    }
    cout<<endl;

    cout<<"Output 3:"<<endl;
    cout<<vet[0]+vet[8]<<endl;

    return 0;
}