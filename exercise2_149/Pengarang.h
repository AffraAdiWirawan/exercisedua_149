#ifndef PENGARANG_H
#define PENGARANG_H

using namespace std; 

class pengarang {
public:
    pengarang(string pNama); :: string getNama() {
        this->nama = nama;
        return nama;
    }

    void tambahBuku(string judul) {
        buku.push_back(judul);
    }

private:
    string nama;
    vector<string> buku;
};

#endif