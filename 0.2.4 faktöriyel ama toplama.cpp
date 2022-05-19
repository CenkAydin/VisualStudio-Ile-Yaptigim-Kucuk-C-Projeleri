#include<iostream>
using namespace std;

int topfakt(int value) {
	if (value > 0) {
		return value + topfakt(value - 1);
	}
	else {
		return 1;
	}
}

int main() {
	int a = 0;
	int b = 1;
	cout << "*****VERILEN SAYIYA KADAR OLAN BUTUN SAYILARIN TOPLAMINI BULMA*****"<<endl;
		do {
			cout << "Hesaplanmasini istediginiz degeri giriniz:"<<endl;
			cin >> a;
			cout << topfakt(a);

			cout <<endl<< "Baska sayi hesaplamak istiyor musunuz?(1/-1)"<<endl;
			cin >> b;
		} while (b != -1);





	return 0;
}