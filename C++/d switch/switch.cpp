#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Halo \n";
    cout << "masukan bilangan: ";
    cin >> a;
    switch(a){
        case 1:
            cout << "a = 1" << endl;
            break;
        case 2:
            cout << "a = 2" << endl;
        case 3:
            cout << "a = 3" << endl;
        case 4:
            cout << "a = 4" << endl;
        default:
            cout << "Angka tidak Ditemukan"<< endl;
    }
    return 0;
    
}