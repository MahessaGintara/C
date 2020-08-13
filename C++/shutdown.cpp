#include <iostream>
using namespace std;

int main(){
    char a;
    cout << "\n \n";
    cout << "Apa anda yakin akan mematikan pc ini y or n: ";
    cin >> a;
    if (a == 'y' || a == 'Y'){
        system("c:\\windows\\system32\\shutdown /s");
    } else {
        cout << "Cie takut" << endl;
        int b;
        b = 1;
        while (b < 10){
            cout<<"\n"<< endl;
            b++;
    }
        
    }
    cin.get();
    return 0;
}