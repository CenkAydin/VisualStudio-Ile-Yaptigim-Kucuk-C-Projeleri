#include<iostream>
using namespace std;
int faktoriyel(int value) {
	if (value > 0) {
		return value * faktoriyel(value - 1);
	}
	else
	{
		return 1;
	}
}

int main() {
	int a=0;
	int b=1;
	cout << "*****FAKTORIYEL BULMA*****\n";
	do {
		cout << "Bulunmasini istediginiz faktoriyel degerini giriniz:\n";
		cin >> a;
		cout << faktoriyel(a);

		cout << "\nBaska faktoriyel bulmak istiyor musunuz?(1/-1)\n";
		cin >> b;
	} 
	while (b != -1);


	return 0;
}