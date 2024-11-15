#include <iostream>
using namespace std;

int main() {
  float a, b, jumlah, kurang, kali, bagi;
  cout << "\nMasukkan nilai pertama : ";
  cin >> a;
  cout << "Masukkan nilai Kedua : ";
  cin >> b;
  cout << "=======================================\n";
  jumlah = a + b;
  kurang = a - b;
  kali = a * b;
  bagi = a / b;
  cout <<"Hasil penjumlahan dari " <<a<<" dan "<<b<<" adalah : "<<jumlah;
  cout <<"\nHasil pengurangan dari " <<a<<" dan "<<b<<" adalah : "<<kurang;
  cout <<"\nHasil perkalian dari " <<a<<" dan "<<b<<" adalah : "<<kali;
  cout <<"\nHasil pembagian dari " <<a<<" dan "<<b<<" adalah : "<<bagi;

  return 0;
}