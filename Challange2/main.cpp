#include <iostream>

using namespace std;

int main()
{
    int r;
    int soal ;
    float phi=3.14;
    float luas;
       cout<<"Masukkan Nomer Soal : ";
    cin>>soal;

    switch(soal){

    case 1:
        cout<<"Luas Lingkaran";
        cout<<"Masukan jari-jari : ";
        cin>>r;
        luas=phi*r*r;

        cout<<"Luas lingkaran = "<<luas;}
    case 2:{
        cout<<"Luas Lingkaran";
        cout<<"Masukan jari-jari : ";
        cin>>r;
        luas=phi*r*r;

        cout<<"Luas lingkaran = "<<luas;
    }

    return 0;
}

