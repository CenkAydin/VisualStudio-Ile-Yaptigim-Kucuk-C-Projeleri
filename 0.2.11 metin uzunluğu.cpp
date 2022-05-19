#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
	char str[50];

	cout << "Kelimemiz:\n";
	cin >> str;
	cout << "Karakter sayisi:\n" << strlen(str);
}