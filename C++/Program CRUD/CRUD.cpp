#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

struct Perpus
{
    int id;
    string buku;
    string kategori;
};


int pilihan();
void check (fstream &data);

void Write (fstream &data, int posisi, Perpus &input){
    data.seekp((posisi - 1)*sizeof(Perpus),ios::beg);
    data.write(reinterpret_cast<char*>(&input),sizeof(Perpus));
}

void addData(fstream &data){

    Perpus input;
    int size;
    readData(data,size);
    input.id=1;
    cout<< "Nama Buku: ";
    getline(cin,input.buku);
    cout<< "Kategori Buku: ";
    getline(cin,input.kategori);
    
    Write(data,1,input);
}

int main(){
    fstream data;

    check(data); 
    
    int a = pilihan();    
    char lanjut;

    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (a != FINISH)
    {
        switch (a)
        {
        case CREATE:
            cout << "Menambah data perpus"<< endl;
            addData(data);
            break;
        case READ:
            cout << "Mencari data perpus"<< endl;
            break;
        case UPDATE:
            cout << "Mengubah data perpus"<< endl;
            break;
        case DELETE:
            cout << "Menghapus data perpus"<< endl;
            break;
        default:
            cout <<"Program tidak ditemukan"<<endl; 
            break;
        }
        label_continue:
        cout<<"Lanjutkan ? (y/n) : ";
        cin>>lanjut;

        if ((lanjut == 'y') | (lanjut == 'Y'))
        {
            a = pilihan();
        }else if ((lanjut=='n') | (lanjut=='N'))
        {
            break;
        }else
        {
            goto label_continue;
        }           
    }     
    cin.get();
    return 0;
}

void check(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    if (data.is_open())
    {
        cout<< "database tersedia"<< endl;

    }else
    {
        cout<< "data base tidak tersedia, membuat database baru..."<< endl;
        data.close();
        data.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int pilihan(){
    int i;
    //system("cls");
    cout << "\nProgram Data Perpus"<< endl;
    cout << "========================"<< endl;
    cout << "1. Tambah data Perpus"<< endl;
    cout << "2. Tamilkan data Perpus"<< endl;
    cout << "3. Ubah data Perpus"<< endl;
    cout << "4. Hapus data Perpus"<< endl;
    cout << "5. selesai"<< endl;
    cout << "========================"<< endl;
    cout << "Pilih menu diatas : ";
    cin >> i;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return i;
}
