#include <iostream>

using namespace std;

int main()
{
    int suhu;
    cout<<"Masukkan suhu : ";
    cin>>suhu;

    if(suhu<=0)
        cout<<"air berwujud padat (es)"<<endl;
    else if (suhu>=100)
        cout<<"air berwujud cair "<<endl;
    else

        cout<<"air berwujud gas"<<endl;
    return 0;
}
