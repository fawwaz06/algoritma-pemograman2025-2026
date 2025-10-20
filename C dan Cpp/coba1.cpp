#include <iostream>
using namespace std;

int main() {
  int mulai, akhir;

  cout << "banyak data: ";
  cin >> akhir;

  cout<< endl;
  for (mulai = 1; mulai <= akhir; mulai++) {
    cout << "perulangan ke-" << mulai <<endl;
  }
  return 0;
}

    