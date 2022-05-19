#include<iostream>
using namespace std;

int main() {
	/*
	int* ptr = nullptr;

	ptr = new int;

	*ptr = 10;				

	delete ptr;		
	yazdırmaya çalışırsak runtime error verir buna dangling referans denir
	*/
	int* ptr1 = nullptr;
	int* ptr2 = nullptr;

	ptr1 = new int;

	*ptr1 = 10;

	ptr2 = ptr1;

	delete ptr1;
	// ptr2 yazdırmaya çalışırsak dangling referans olayı yaşanır





	return 0;
}