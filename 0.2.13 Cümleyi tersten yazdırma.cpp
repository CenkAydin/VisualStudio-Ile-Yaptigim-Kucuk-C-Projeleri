#include <iostream>

using namespace std;

int main() {
	string metin;

	cout << "Metin giriniz: ";
	getline(cin, metin);

	metin = string(metin.rbegin(), metin.rend());

	cout << metin;

	return 0;
}