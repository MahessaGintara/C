#include <iostream>
using namespace std;

int penjumlahan(int a, int b){
    int y;
    y= a + b;
    return y;
}

int pengurangan(int c,int d){
    int y;
    y = c - d;
    return y;
}

void out(int hasil){
    cout <<"hasilnya adalah "<< hasil <<endl;
}

int main(){
    cout<<"\t hallo selamat datang di perhitungan\n";
    int p;
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"Pilih opsi :";
    cin>>p;
    if (p==1){
        int a,b, hasil;
        cout<<"Masukan angka pertama: ";
        cin>>a;
        cout<<"Masukan angka ke dua: ";
        cin>> b;

        hasil = penjumlahan(a,b);
        out(hasil);
        } else if (p == 2){
            int c,d,hasil;
            cout<<"Masukan angka pertama: ";
            cin>>c;
            cout<<"Masukan angka ke dua: ";
            cin>>d;
            hasil = pengurangan(c,d);
            out(hasil);
        }else{
            cout<<"gada menu itu lol"<<endl;
        }
        
    cin.get();
    return 0;
}