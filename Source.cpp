#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef struct Mahasiswa {
	string nama;
	string nim;
	string nilai;
};
Mahasiswa maha[5];
Mahasiswa temp1;
int main();
void sorting();

void input() {
	system("cls");
	for (int i = 0; i < 5; i++) {
		cout << "Data Mahasiswa " << i + 1 << endl<<endl;
		cout << "Nama mahasiswa : ";
		getline(cin, maha[i].nama);
		cout << "NIM : ";
		getline(cin, maha[i].nim);
		cout << "Nilai : ";
		getline(cin, maha[i].nilai);
		system("cls");
	}
	sorting();
	main();
}

void sorting() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (maha[i].nama < maha[j].nama) {
				temp1 = maha[i];
				maha[i] = maha[j];
				maha[j] = temp1;
			}
		}
	}
}


void tampil() {
	system("cls");
	cout << "NIM" << setw(30) << "Nama" << setw(20) << "Nilai" << endl << endl;
	for (int i = 0; i < 5; i++) {
		cout << maha[i].nim << setw(30) << maha[i].nama << setw(20) << maha[i].nilai << endl;
	}
	system("pause");
	main();
}

int main() {
	system("cls");
	string temp;
	cout << "Menu Utama" << endl;
	cout << "1. Input Data Mahasiswa" << endl;
	cout << "2. Tampilkan Data Mahasiswa" << endl;
	cout << "Masukkan pilihan:";
	getline(cin, temp);
	if (temp == "1") {
		input();
	}
	else if (temp == "2") {
		tampil();
	}
	else {
		cout << "Maaf menu tidak tersedia";
		main();
	}
}
