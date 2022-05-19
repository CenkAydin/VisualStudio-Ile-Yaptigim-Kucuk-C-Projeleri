#include<iostream>
using namespace std;

class Employee {

private:
	string name;
	int salary;
	int id;

public:

	Employee(string isim, int maas, int kimlik) {

		name = isim;
		salary = maas;
		id = kimlik;
	}
	void setSalary(int maas) {
		salary = maas;
	}
	int getSalary() {
		return salary;
	}
	void setName(string isim) {
		name = isim;
	}
	string getName() {
		return name;
	}
	void showInfos() {
		cout << "Isim: " << name << endl;
		cout << "Maas: " << salary << endl;
		cout << "Id: " << id << endl;
	}
};

int main() {
	Employee employee("Mustafa Murat", 3000, 12);
	
	
	employee.showInfos();



	return 0;
}