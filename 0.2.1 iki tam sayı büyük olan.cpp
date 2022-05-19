#include<iostream>
using namespace std;

int main() {
	
	int sayi1;
	int sayi2;

	cout << "Ilk sayiyi giriniz:";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz:";
	cin >> sayi2;
	if (sayi1 > sayi2) {
		cout << sayi1 << " > " << sayi2;
	}
	else if (sayi1 < sayi2) {
		cout << sayi1 << " < " << sayi2;
	}
	else {
		cout << "Iki sayi esittir.";
	}




	return 0;
}