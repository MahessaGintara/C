#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukan angka : ";
    cin >> a;
    while (a < 10){
        cout << "Saya angka " << a << " dibawah 10" << endl;
        a++; 
    }
    cout<< "program selesai" << endl;
    
    cin.get();
    return 0;
}