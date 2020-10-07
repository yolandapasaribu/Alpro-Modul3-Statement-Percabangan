#include <iostream> //library input output pada c++

using namespace std; //meringkas std pada program c++

int main() //program utama c++
{ //membuka fungsi
    int noHari; //membuat variabel noHari bertipe data integer

    cout<<"Masukkan Nomer Hari 1-7 : "; //menampilkan output kalimat inputkan sudut
    cin>>noHari; //memanggil var noHari

    switch(noHari){ //kondisi sesuai dengan variabel noHari
    case 1: //fungsi jika diinputkan 1
        cout<<" ini adalah hari Minggu\n"; //menghasilkan output ini adalah hari minggu
        break; //menunjukan bahwa perintah siap keluar dari switch
    case 2: //fungsi jika diinputkan 2
        cout<<" ini adalah hari Senin\n"; //menghasilkan output ini adalah hari senin
        break;//menunjukan bahwa perintah siap keluar dari switch
    case 3: //fungsi jika diinputkan 3
        cout<<" ini adalah hari Selasa\n"; //menghasilkan output ini adalah hari selasa
        break;//menunjukan bahwa perintah siap keluar dari switch
    case 4://fungsi jika diinputkan 4
        cout<<" ini adalah hari Rabu\n"; //menghasilkan output ini adalah hari rabu
        break;//menunjukan bahwa perintah siap keluar dari switch
    case 5://fungsi jika diinputkan 5
        cout<<" ini adalah hari Kamis\n"; //menghasilkan output ini adalah hari kamis
        break;//menunjukan bahwa perintah siap keluar dari switch
    case 6://fungsi jika diinputkan 6
        cout<<" ini adalah hari Jumat\n"; //menghasilkan output ini adalah hari jumat
        break;//menunjukan bahwa perintah siap keluar dari switch
    case 7://fungsi jika diinputkan 7
        cout<<" ini adalah hari Sabtu\n"; //menghasilkan output ini adalah hari sabtu
        break;//menunjukan bahwa perintah siap keluar dari switch
    default: //jika semua pilihan tidak ada yg terpenuhi maka akan melakukan perintah dibawah
        cout<<"Tidak ada Hari Ke-"<<noHari<<endl; //menghasilkan output tidak ada hari ke (angka yang diinputkan)

        break;//menunjukan bahwa perintah siap keluar dari switch
    }//menutup fungsi
    return main(); // menandakan program berjalan dengan beruntut
}//menutup fungsi
