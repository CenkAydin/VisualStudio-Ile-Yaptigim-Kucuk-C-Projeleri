#include<iostream>
using namespace std;

int main() {
	int x;
	int y;
	int islem=0;
	while (islem != 5) {
	cout << endl<<"*****Islemi giriniz.*****" << endl;
	cout << "1. Toplama" << endl << "2. Cikarma" << endl << "3. Carpma" << endl << "4. Bolme"<<endl<<"5. Hesap makinesini kapat"<<endl<<"**************************"<<endl;
		cin >> islem;
		switch (islem) {
		case 1:
			cout << "\n2 sayi giriniz:" << endl;
			cin >> x;
			cin >> y;
			cout << x + y;
			break;
		case 2:
			cout << "\n2 sayi giriniz:" << endl;
			cin >> x;
			cin >> y;
			cout << x - y;
			break;
		case 3:
			cout << "\n2 sayi giriniz:" << endl;
			cin >> x;
			cin >> y;
			cout << x * y;
			break;
		case 4:
			cout << "\n2 sayi giriniz:" << endl;
			cin >> x;
			cin >> y;
			cout << x / y;
			break;
		default:
			cout << "\n!!!Tanimlanamayan islem!!!";
			break;

		}


	}
	cout << "Iyi günler.";


	return 0;
}