#include<iostream>
using namespace std;

int main() {
	int sayi;
	int durum = 1;

	cout << "Sayi giriniz:" << endl;
	cin >> sayi;

	for (int i = 2; i < sayi; i++) {
		if (sayi % i == 0) {
			cout << "Asal sayi degildir.";
			durum = 0;
			break;
		}
	}
	if (durum) {
		cout << "Asal sayidir.";
	}





	return 0;
}