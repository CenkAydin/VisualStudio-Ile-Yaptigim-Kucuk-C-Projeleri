#include<iostream>
using namespace std;
void toplama(int* a, int* b) {
	cout << "Sonucunuz: " << *a + *b<<endl;
}
void cikarma(int* a, int* b) {
	cout << "Sonucunuz: " << *a - *b<<endl;
}
void carpma(int* a, int* b) {
	cout << "Sonucunuz: " << *a * *b<<endl;
}
void bolme(int* a, int* b) {
	cout << "Sonucunuz: " << *a / *b<<endl;
}

int main() {
	int islem=0;
	int sayi1;
	int sayi2;
	while (islem != 5)
	{
		cout << endl << "*****Islemi giriniz.*****" << endl;
		cout << "1. Toplama" << endl << "2. Cikarma" << endl << "3. Carpma" << endl << "4. Bolme" << endl << "5. Hesap makinesini kapat" << endl << "**************************" << endl;
		cin >> islem;
		if (islem == 1) {
			cout << "Iki sayi giriniz: " << endl;
			cin >> sayi1 >> sayi2;
			toplama(&sayi1, &sayi2);
		}
		if (islem == 2) {
			cout << "Iki sayi giriniz: " << endl;
			cin >> sayi1 >> sayi2;
			cikarma(&sayi1, &sayi2);
		}
		if (islem == 3) {
			cout << "Iki sayi giriniz: " << endl;
			cin >> sayi1 >> sayi2;
			carpma(&sayi1, &sayi2);
		}
		if (islem == 4) {
			cout << "Iki sayi giriniz: " << endl;
			cin >> sayi1 >> sayi2;
			bolme(&sayi1, &sayi2);
		}
		if (islem>5 || islem<0) {
			cout << "Oyle bir islem yok!!!\nTekrar deneyiniz!!!\n";
		}



	}
	cout << "Gorusuruz!";
	return 0;
}