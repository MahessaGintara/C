#include <iostream>
using namespace std;

int main(){
	float a,b,c;
	char aritmatika;
	cout << "Selamat datang \n \n";
	//memasukan input dari user
	cout << "Masukan nilai pertama: ";
	cin >> a;
	cout << "Pilih perhitungan +,-,*,/: ";
	cin >> aritmatika;
	cout << "Masukan bilangan kedua: ";
	cin >> b;
	
	cout << a << aritmatika << b;

	if (aritmatika == '+'){
		c = a + b;
	} else if (aritmatika == '-'){
		c = a - b;
	} else if (aritmatika == '*'){
		c = a * b;
	} else if (aritmatika == '/'){
		c = a / b;
	} else {
		cout << "Operator tidak dapat ditemukan";
	}
	cout << "=" << c << endl;


	cin.get();
	return 0;
}