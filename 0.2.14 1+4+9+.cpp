#include<iostream>
using namespace std;

int main() {
	int i; 
	int j=0;
	int toplam;
	for (i = 0; i * i < 101; i++) {
		toplam = i*i + j;
		j = toplam;
	}
	cout << toplam;





	return 0;
}