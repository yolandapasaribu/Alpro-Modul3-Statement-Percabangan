#include <iostream> 
using namespace std; 

int main() 
{ 
    int noHari; 

    cout<<"Masukkan Nomer Hari 1-7 : ";
    cin>>noHari;

    switch(noHari){ 
    case 1: 
        cout<<" ini adalah hari Minggu\n"; 
        break; 
    case 2:
        cout<<" ini adalah hari Senin\n"; 
        break;
    case 3:
        cout<<" ini adalah hari Selasa\n"; 
        break;
    case 4:
        cout<<" ini adalah hari Rabu\n"; 
        break;
    case 5:
        cout<<" ini adalah hari Kamis\n"; 
        break;
    case 6:
        cout<<" ini adalah hari Jumat\n"; 
        break;
    case 7:
        cout<<" ini adalah hari Sabtu\n"; 
        break;
    default: 
        cout<<"Tidak ada Hari Ke-"<<noHari<<endl; 

        break;
    }
    return main(); 
}
