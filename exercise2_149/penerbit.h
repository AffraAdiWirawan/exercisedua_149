#ifndef PENERBIT_H
#define PENERBIT_H

class Penerbit {
private: string nama;
	     vector<pengarang*> daftarPengarang;
public:

	Penerbit(string pNama); ::string getNama() {
		this->nama = nama;
		return nama;
	}
	void tambahPengarang(pengarang* pengarang) {
		daftarPengarang.push_back(pengarang);
	}
};
#endif // !PENERBIT_H
