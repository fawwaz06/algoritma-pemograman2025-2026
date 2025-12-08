#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    vector<int> arr;
    for (char c : nim) arr.push_back(c - '0');

    int total = 0;
    int maks = arr[0];
    int minim = arr[0];

    for (int x : arr) {
        total += x;
        if (x > maks) maks = x;
        if (x < minim) minim = x;
    }

    float rata = (float)total / arr.size();

    cout << "Array digit: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    cout << "Total digit     : " << total << endl;
    cout << "Digit terbesar  : " << maks << endl;
    cout << "Digit terkecil  : " << minim << endl;
    cout << "Rata-rata digit : " << rata << endl;

    cout << "Reverse array   : ";
    for (int i = arr.size()-1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;

    return 0;
}