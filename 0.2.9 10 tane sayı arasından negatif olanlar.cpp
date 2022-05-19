#include<iostream>
using namespace std;

int main() {
	int negsayi = 0;
	int sayi;
	for (int i = 0; i < 10; i++) {
		cout << "Sayi giriniz:" << endl;
		cin >> sayi;
		if (sayi < 0) {
			negsayi++;
		}
		else {
			continue;
		}

	}

	cout << "Toplam " << negsayi << " negatif sayi vardir.";




	return 0;
}