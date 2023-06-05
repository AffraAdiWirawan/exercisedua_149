#include <iostream>
#include <vector>
#include <string>

using namespace std;

class pengarang {
public:
    pengarang(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return nama;
    }
    void tambahBuku(string judul) {
        buku.push_back(judul);
    }
    string nama;
    vector<string> buku;
};

class Penerbit {
public:
    Penerbit(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return nama;
    }

    void tambahPengarang(pengarang pengarang) {
        daftarPengarang.push_back(pengarang);
    }
    string nama;
    vector<pengarang> daftarPengarang;
};
int main()
{
    pengarang* varpengarang = new pengarang("joko");
    pengarang joko("joko");
    pengarang* varpengarang = new pengarang("Lia");
    pengarang lia("Lia");
    pengarang* varpengarang = new pengarang("Giga");
    pengarang giga("Giga");

  
    pengarang asroni("Asroni");
    pengarang gigaIntan("Giga");

   
    Penerbit gamaPress("Gama Press");
    gamaPress.tambahPengarang(joko);
    gamaPress.tambahPengarang(lia);
    gamaPress.tambahPengarang(giga);

    Penerbit intanPariwara("Intan Pariwara");
    intanPariwara.tambahPengarang(asroni);
    intanPariwara.tambahPengarang(gigaIntan);

   
    joko.tambahBuku("Fisika");
    joko.tambahBuku("Algoritma");


    lia.tambahBuku("Basisdata");


    asroni.tambahBuku("Dasar Pemrograman");

  
    giga.tambahBuku("Matematika");
    giga.tambahBuku("Multimedia 1");

    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    cout << joko.getNama() << endl;
    cout << lia.getNama() << endl;
    cout << giga.getNama() << endl;

    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    cout << asroni.getNama() << endl;
    cout << gigaIntan.getNama() << endl;

    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    cout << gamaPress.getNama() << endl;
    cout << intanPariwara.getNama() << endl;

    pengarang joko;
    joko.nama = "Joko";
    joko.buku = { "Fisika", "Algoritma" };

    pengarang lia;
    lia.nama = "Lia";
    lia.buku = { "Basisdata" };

    pengarang asroni;
    asroni.nama = "Asroni";
    asroni.buku = { "Dasar Pemrograman" };

    pengarang giga;
    giga.nama = "Giga";
    giga.buku = { "Matematika", "Multimedia 1" };

    cout << "Daftar buku yang dikarang oleh \"Joko\":" << endl;
    for (const string& buku : joko.buku) {
        std::cout << buku << endl;
    }

    cout << "Daftar buku yang dikarang oleh \"Lia\":" << endl;
    for (const string& buku : lia.buku) {
        cout << buku << endl;
    }


    return 0;
}