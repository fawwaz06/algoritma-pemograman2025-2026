#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(int hadir, int forum, int individu, int kelompok, int uts, int uas, int project) {
    return (hadir * 0.05) + (forum * 0.05) + (individu * 0.10) +
           (kelompok * 0.10) + (uts * 0.25) + (uas * 0.30) + (project * 0.15);
}

// Fungsi untuk menentukan huruf mutu
char hurufMutu(double nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 56) return 'C';
    else if (nilai >= 36) return 'D';
    else return 'E';
}

int main() {
    string nim, nama;
    int hadir, forum, individu, kelompok, uts, uas, project;

    // Input data mahasiswa
    cout << "=== INPUT DATA MAHASISWA ===" << endl;
    cout << "NIM               : ";
    getline(cin, nim);
    cout << "NAMA              : ";
    getline(cin, nama);
    cout << "NILAI KEHADIRAN   : ";
    cin >> hadir;
    cout << "NILAI FORUM       : ";
    cin >> forum;
    cout << "NILAI INDIVIDU    : ";
    cin >> individu;
    cout << "NILAI KELOMPOK    : ";
    cin >> kelompok;
    cout << "NILAI UTS         : ";
    cin >> uts;
    cout << "NILAI UAS         : ";
    cin >> uas;
    cout << "NILAI PROJECT     : ";
    cin >> project;

    // Hitung nilai akhir dan huruf mutu
    double akhir = hitungNilaiAkhir(hadir, forum, individu, kelompok, uts, uas, project);
    int akhirBulat = round(akhir);
    char mutu = hurufMutu(akhirBulat);

    // Output hasil
    cout << "\n=== HASIL NILAI MAHASISWA ===" << endl;
    cout << "NIM          : " << nim << endl;
    cout << "NAMA         : " << nama << endl;
    cout << "NILAI AKHIR  : " << akhirBulat << endl;
    cout << "HURUF MUTU   : " << mutu << endl;

    return 0;
}