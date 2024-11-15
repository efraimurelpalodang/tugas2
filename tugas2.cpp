#include <iostream>
using namespace std;

int main() {
  const float phi = 3.14;
  float r, luas, keliling;
  cout << "==================================";
  cout << "\n== MENGHITUNG LUAS DAN KELILING ==";
  cout << "\n==================================\n";
  cout << "Masukkan nilai jari-jari : ";
  cin >> r;
  luas = phi * r * r;
  keliling = 2 * phi * r;
  cout << "hasil luas : " << luas << endl;
  cout << "hasil keliling : " << keliling;
  cout << "\n==================================";

  return 0;
}