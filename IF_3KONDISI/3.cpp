#include <iostream>  
using namespace std; 

int main() 
{ 
    float sudut; 

    cout<<"inputkan sudut : "; 
    cin>> sudut; 

    if(sudut<90){
        cout<<sudut<<" termasuk sudut lancip\n";
    } 
    else if (sudut==90){ 
        cout<<sudut<<" termasuk sudut siku-siku\n"; 
    }
    else { 
        cout<<sudut<<" termasuk sudut tumpul\n"; 
    }


    return main(); 
}
