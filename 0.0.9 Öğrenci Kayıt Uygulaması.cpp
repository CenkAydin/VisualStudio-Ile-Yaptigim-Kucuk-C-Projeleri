#include<iostream>
using namespace std;
class Ogrenci {
private : 
	string tc;
	string ad;
	string soyad;
	int yas;
	string dersAdi;
	int ortalama;
public:
	Ogrenci()
	{
		cout << "Yapici metod calisti."<<endl;

	}

	void setTc(string tc) { this->tc = tc; }
	void setAd(string ad) { this->ad = ad; }
	void setSoyad(string soyad) { this->soyad = soyad; }
	void setYas(int yas) { this->yas = yas; }
	void setDersAdi(string dersAdi) { this->dersAdi = dersAdi; }
	void setOrtalama(int ortalama) { this->ortalama = ortalama; }
	
	string getTc() { return tc; }
	string getAd() { return ad; }
	string getSoyad() { return soyad; }
	int getYas() { return yas; }
	string getDersAdi() { return dersAdi; }
	int getOrtalama() { return ortalama; }
 
	void listele( Ogrenci [] );

};

void Ogrenci :: listele(Ogrenci ogr []) {
	for (int i = 0; i < 3; i++) {

		cout << i + 1 << ". ogrenci bilgileri: " << endl;
		cout << "tc       : " << ogr[i].getTc << endl;
		cout << "ad       : " << ogr[i].getAd << endl;
		cout << "soyad    : " << ogr[i].getSoyad << endl;
		cout << "yas      : " << ogr[i].getYas << endl;
		cout << "ders adi : " << ogr[i].getDersAdi << endl;
		cout << "ortalama : " << ogr[i].getOrtalama << endl;
	}
	cout << "Ogrenci bilgileri listelendi." << endl;
}

int main() {
	Ogrenci ogr[3];

	string tc;
	string ad;
	string soyad;
	int yas;
	string dersAdi;
	int ortalama;

	for (int i = 0; i < 3; i++) {

		cout << i + 1 << ". ogrenci bilgilerinizi giriniz: " << endl;
		cout << "tc       : ";
		cin >> tc;
		cout << "ad       : "; 
		cin >> ad;
		cout << "soyad    : "; 
		cin >> soyad;
		cout << "yas      : "; 
		cin >> yas;
		cout << "ders adi : "; 
		cin >> dersAdi;
		cout << "ortalama : "; 
		cin >> ortalama;
		
		ogr[i].setTc(tc);
		ogr[i].setAd(ad);
		ogr[i].setSoyad(soyad);
		ogr[i].setYas(yas);
		ogr[i].setDersAdi(dersAdi);
		ogr[i].setOrtalama(ortalama);
	}
	cout << "Kayit islemi tamamlandi." << endl;

	ogr[0].listele(ogr);


	return 0;
}