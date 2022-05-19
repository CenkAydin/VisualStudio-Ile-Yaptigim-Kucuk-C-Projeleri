#include<iostream>
using namespace std;
void toplama(int* a,int* b) {
	cout << "Sonucunuz: " << *a + *b << endl;

}

int main() {
	int sayi1;
	int sayi2;
	cout << "2 tane sayi giriniz:";
	cin >> sayi1 >> sayi2;
	toplama(&sayi1, &sayi2);




	return 0;
}