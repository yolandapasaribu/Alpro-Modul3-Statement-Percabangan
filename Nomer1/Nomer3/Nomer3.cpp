#include <iostream>

using namespace std;

int main()
{
    int pilihan, p1, p2;
    cout << "<< MENU MENGHITUNG BIAYA OPERASI >>" << endl;
    cout << "........................................................." << endl;
    cout << "1. Biaya Oprasi Mata" << endl;
    cout << "2. Biaya Oprasi Jantung" << endl;
    cout << "........................................................." << endl;
    cout << "Masukan Pilihan Anda = "; cin >> pilihan;
    cout << "........................................................." << endl;

    if(pilihan==1){
        cout << "~~Jenis Penyakit Mata~~" << endl;
        cout << "1. Katarak" << endl;
        cout << "2. Plus/Minus" << endl;
        cout << "3. Silinder" << endl;
        cout << "........................................................." << endl;
        cout << "Masukkan jenis penyakit mata = "; cin >> p1;
        cout << "........................................................." << endl;
        switch(p1){

        case 1:
            cout << "Biaya Oprasi Mata Katarak = Rp.7.500.000" << endl;
        break;

        case 2:
            cout << "Biaya Oprasi Mata Plus/Minus = Rp.5.000.000" << endl;
        break;

        case 3:
            cout << "Biaya Oprasi Mata Silinder = Rp.4.000.000" << endl;
        break;
        default:
           cout << "........................................................." << endl;
            cout << "Pilihan Tidak Ada" << endl;
        break;
}

    }else if(pilihan==2){
        cout << "~~Jenis Penyakit Jantung~~" << endl;
        cout << "1. Jantung Koroner" << endl;
        cout << "2. Katup Jantung" << endl;
        cout << "3. Otot Jantung" << endl;
        cout << "........................................................." << endl;
        cout << "Masukkan jenis penyakit jantung ="; cin >> p2;
        cout << "........................................................." << endl;
        switch(p2){

        case 1:
            cout << "Biaya Oprasi Jantung Koroner = Rp.500.000.000" << endl;
        break;

        case 2:
            cout << "Biaya Oprasi Katup Jantung = Rp.350.000.000" << endl;
        break;

        case 3:
            cout << "Biaya Oprasi Otot Jantung = Rp.450.000.000" << endl;
        break;
        default:
            cout << "-----------------------------------------------------" << endl;
            cout << "Pilihan Tidak Ada" << endl;

        }

}


    return 0;
}
