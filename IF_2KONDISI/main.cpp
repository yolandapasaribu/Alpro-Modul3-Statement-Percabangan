#include <iostream> //library input output pada c++

using namespace std;//meringkas std pada program c++

int main() //program utama c++
{ //membuka fungsi
   int bil; //membuat variabel bil bertipe data integer
   cout<<"Masukkan sebuah bilangan :"<<endl; //menampilkan output berupa kalimat masukkan sebuah bilangan :
   cin>>bil; //memanggil variabel bil

   if(bil%2==0){ //kondisi jika inputan dari var bil memiliki hasil 0 apabila inputan tersebut di MOD 2 (sisa hasil bagi) --kondisi 1--
    cout<<bil<<" adalah bilangan genap\n"; // menghasilkan output pernyataan bahwa bil yg diinputkan adalah bilangan genap
   } //menutup fungsi
   else { //  kondisi apabila inputan tidak memenuhi kondisi 1 maka inputan akan menghasilkan pernyataan ini --kondisi 2--
    cout<<bil<<" adalah bilangan ganjil\n";  // menampilkan output pernyataan bahwa bil yang diinputkan adalah bilangan ganjil
   } //menutup fungsi
    return main(); //menandakan bahwa program berjalan dengan baik atau tidak
} //menutup fungsi
