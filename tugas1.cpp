#include <iostream>
using namespace std;

int main() {
  float f, c;
  cout << "\n=====================";
  cout << "\n== KONVERSI F KE C ==";
  cout << "\n=====================\n";
  cout << "Masukkan fahrenheit : ";
  cin >> f;
  c = (f - 32) * 5/9;
  cout << "hasil konversi fahrenheit " << f << " ke celcius adalah : " << c << " c";
  cout << "\n============================================================";

  return 0;
}