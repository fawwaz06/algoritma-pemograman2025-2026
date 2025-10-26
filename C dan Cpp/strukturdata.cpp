#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double hitungNilaiAkhir(int h, int f, int i, int k, int uts, int uas, int p) {
    return h*0.05 + f*0.05 + i*0.10 + k*0.10 + uts*0.25 + uas*0.30 + p*0.15;
}

char hurufMutu(double n) {
    if (n >= 85) return 'A';
    else if (n >= 70) return 'B';
    else if (n >= 56) return 'C';
    else if (n >= 36) return 'D';
    return 'E';
}

int main() {
    string nim, nama;
    int h, f, i, k, uts, uas, p;

    cout << "NIM: "; getline(cin, nim);
    cout << "NAMA: "; getline(cin, nama);
    cout << "KEHADIRAN: "; cin >> h;
    cout << "FORUM: "; cin >> f;
    cout << "INDIVIDU: "; cin >> i;
    cout << "KELOMPOK: "; cin >> k;
    cout << "UTS: "; cin >> uts;
    cout << "UAS: "; cin >> uas;
    cout << "PROJECT: "; cin >> p;

    double akhir = hitungNilaiAkhir(h, f, i, k, uts, uas, p);
    cout << "\n" << nim << " - " << nama << endl;
    cout << "Nilai Akhir : " << round(akhir) << endl;
    cout << "Huruf Mutu  : " << hurufMutu(round(akhir)) << endl;
}







