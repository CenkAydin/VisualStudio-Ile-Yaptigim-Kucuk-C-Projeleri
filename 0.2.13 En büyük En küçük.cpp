#include<iostream>
#define MAX 50
using namespace std;

void sirala(int dizi[], int boyut) {
	int x;
	int j;
	for (int i = 0; i < boyut; i++) {
		for (j = 1; j < boyut - i; j++) {
			if (dizi[j - 1] > dizi[j]) {
				int gecici = dizi[j];
				dizi[j] = dizi[j - 1];
				dizi[j - 1] = gecici;
			}
		}
	}
}
int main() {
	int dizi1[MAX], boyut1;
	int i;
	cout << "Kac elemanli:" << endl;
	cin >> boyut1;
	cout << "Elemanlari giriniz:" << endl;
	for (i = 0; i < boyut1; i++) {
		cin >> dizi1[i];
	}
	sirala(dizi1, boyut1);
	cout << "En kucuk deger: " << dizi1[0] << endl << "En buyuk deger: " << dizi1[boyut1-1];

	return 0;
}