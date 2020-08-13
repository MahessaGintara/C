#include <iostream>
using namespace std;
//penggunaan if, else if, else. pada C++
int main(){
    int a;
    cout << "Selamat datang \n";
    cout << "1. Masuk \n";
    cout << "2. Daftar \n";
    cout << "Pilih Metode masuk: ";
    cin >> a;
    if (a == 1){
        cout << "Masuk" << endl;
    } else if (a == 2){
        cout << "Daftar" << endl;
    } else {
        cout << "Menu tidak Tersedia" << endl;
    }

    return 0;
}
