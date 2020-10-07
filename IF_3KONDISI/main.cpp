#include <iostream>  //library input output pada c++

using namespace std; //meringkas std pada program c++

int main() //program utama c++
{ //membuka fungsi
    float sudut; //membuat var sudut bertipe data float

    cout<<"inputkan sudut : "; //menampilkan output kalimat inputkan sudut
    cin>> sudut; //memanggil var sudut

    if(sudut<90){ // kondisi jika inputan sudut kurang dari 90 --kondisi 1--
        cout<<sudut<<" termasuk sudut lancip\n"; // apabila kondisi 1 terpenuhi maka akan menampilkan sudut termasuk sudut lancip
    } //menutup fungsi
    else if (sudut==90){ //kondisi jika inputan sudut = 90 --kondisi 2--
        cout<<sudut<<" termasuk sudut siku-siku\n"; // apabila kondisi 2 terpenuhi maka akan menampilkan sudut termasuk sudut siku-siku
    } //menutup fungsi
    else { //kondisi jika inputan tidak memenuhi pada kondisi 1 dan 2
        cout<<sudut<<" termasuk sudut tumpul\n"; // akan menampilkan sudut termasuk sudut lancip
    }//menutup fungsi


    return main(); //menandakan bahwa program berjalan dengan baik atau tidak
}//menutup fungsi
