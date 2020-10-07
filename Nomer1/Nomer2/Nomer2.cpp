#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a,b;
    float hasil;
    cout<<"Masukkan bilangan yang akan dibagi: ";
    cin>>a;
    cout<<"Masukkan bilangan pembagi: ";
    cin>>b;
    hasil=a/b;
        if(a !=0 &&b !=0)
        {
            cout<<setiosflags(ios::fixed)<<endl;
            cout<<"Hasil bagi : "<<setprecision(2)<<hasil<<endl;
        }
        else
        {
            cout<<"Tidak boleh 0"<<endl;
        }
    return 0;
}
