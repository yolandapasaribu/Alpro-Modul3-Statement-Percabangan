#include <iostream> //library input output pada c++

using namespace std; //meringkas std pada program c++

int main() //program utama c++
{ //membuka fungsi
    int bil; //membuat variabel bil bertipe data integer

    cout<<"Masukkan sebuah bilangan : "; //menampilkan output masukkan sebuah bilangan
    cin>>bil; //memanggil variabel bil

    if (bil>0){ //kondisi jika inputan dari variabel bil lebih dari 0
        cout<< "bilangan yang anda masukkan : "<<bil<<endl;  // menampilkan output bilangan yang anda masukkan dan menampilkan output hasil dari kondisi di atas
        cout<< "adalah bilangan bulat positif"<<endl; //menampilkan output adalah bilangan bulat positif
    }//menutup fungsi

    if (bil==0){ //kondisi jika inputan dari variabel bil memiliki nilai =0
        cout<< "bilangan yang anda masukkan : "<<bil<<endl; // menampilkan output bilangan yang anda masukkan dan menampilkan output hasil dari kondisi di atas
        cout<< "adalah bilangan bulat 0"<< endl; //menampilkan output adalah bilangan bulat 0
    }//menutup fungsi

    if (bil<0){
        cout<< "bilangan yang anda masukkan : "<<bil<<endl; // menampilkan output bilangan yang anda masukkan dan menampilkan output hasil dari kondisi di atas
        cout <<"adalah bilangan bulat negatif"<<endl; //menampilkan output adalah bilangan bulat negatif
    }//menutup fungsi

    return main(); //menandakan bahwa program berjalan dengan baik atau tidak
}//menutup fungsi

