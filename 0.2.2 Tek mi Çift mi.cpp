#include<iostream>
using namespace std;

int main() {
	int a;
	int cikis;
	do {
		cikis = 1;
		cout << "Sayi giriniz:";
		cin >> a;
		if (a % 2 == 0) {
			cout << a << " cift sayidir.";
		}
		else {
			cout << a << " tek sayidir.";
		}
		cout << endl<<"Devam etmek istiyor musunuz?(1/-1)";
		cin >> cikis;
	} while (cikis != -1);






	return 0;
}