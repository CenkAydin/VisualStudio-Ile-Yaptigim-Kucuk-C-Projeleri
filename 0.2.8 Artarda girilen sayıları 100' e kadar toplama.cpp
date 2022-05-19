#include<iostream>
using namespace std;

int main() {

	int sayi;
	int toplam=0;
	do {
		cout << "Sayi giriniz:" << endl;
		cin >> sayi;
		toplam += sayi;
		cout << "Toplam: " << toplam<<endl;
	} while (toplam < 100);





	return 0;
}