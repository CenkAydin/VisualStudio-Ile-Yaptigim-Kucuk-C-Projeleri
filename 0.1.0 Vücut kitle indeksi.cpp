#include<iostream>

using namespace std;

int main() {
	cout << "**********VUCUT KITLE INDEKSI PROGRAMI**********\n";
	double boy, kilo,indeks;
	int cikis;
	do {
		cikis = -1;
		cout << "Kilonuzu giriniz(kg cinsinden):\n";
		cin >> kilo;
		cout << "Boyunuzu giriniz(Metre cinsinden, ornek:1.82):\n";
		cin >> boy;

		indeks = kilo / (boy * boy);

		cout << "Vucut kitle indeksi sonucunuz:" << indeks << ".\n";

		if (indeks < 18.5) {
			cout << "Zayifsiniz.\a\n";
		}
		if (indeks >= 18.5 && indeks < 25) {
			cout << "Normal kilolusunuz.\n";
		}
		if (indeks >= 25 && indeks < 30) {
			cout << "Fazla kilolusunuz.\a\n";
		}
		if (indeks >= 30 && indeks < 40) {
			cout << "Obezsiniz.\a\n";
		}
		if (indeks >= 40) {
			cout << "Ileri derecede obezsiniz.\a\n";
		}
		cout << "Cikmak icin istiyor musunuz? (1/-1)\n";
		cin >> cikis;
	} while (cikis != 1);


	return 0;
}