// activity1_213struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct DetailAlamat {
    string kota;
    string desa;
};
struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa:";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa:";
    cout << "\t Nama Kota:";
    cin >> mhs.alamat.kota;
    cout << "\t Nama Desa: ";
    cin >> mhs.alamat.desa;

    cout << "Umur Mahasiswa:";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM:" << mhs.nim;
    cout << "\n Nama: " << mhs.nama;
    cout << "\n Alamat: ";
    cout << "\n Kota:";
    cout << "\n Umur: " << mhs.umur;
}

int main()
{
    std::cout << "Hello World!\n";
}


