#include <iostream>

using namespace std;

int main()
{
	char huruf;

	cout<<"Masukkan sebuah huruf : ";
	cin>>huruf;

	if((huruf=='a') || (huruf== 'A') ||
        (huruf=='i') || (huruf== 'I')||
        (huruf=='u') || (huruf== 'U')||
        (huruf=='e') || (huruf== 'E')||
        (huruf=='o') || (huruf== 'O')){

            cout<<huruf<<" adalah salah satu huruf vokal";
        }
    else{
        cout<<huruf<<" adalah huruf konsonan";
    }




    return 0;
}
