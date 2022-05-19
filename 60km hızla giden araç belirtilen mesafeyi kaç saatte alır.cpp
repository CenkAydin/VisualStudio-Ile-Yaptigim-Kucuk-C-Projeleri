#include<iostream>
using namespace std;
#define HIZ 60
int main() {
	double km;
	double zaman;

	cout << "Hesaplanmasini istediginiz degeri kilometre cinsinden giriniz:" << endl;
	cin >> km;
	zaman = HIZ / km;
	cout << zaman << " saatte yol alir."<<endl;





	return 0;
}