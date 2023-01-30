#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float sudut; // Sudut Penembakan
  float kecepatan; // Kecepatan Penembakan
  float rad; // Sudut dalam Radian
  float jarak; // jarak

  const float PHI = 3.14;
  const float GRAVITASI = 9.8;


  cout<<"Menghitung Jarak Jatuh Peluru"<<endl<<endl;
  cout<<"Masukkan Sudut Penambakan (derajat) = ";
  cin>>sudut;
  cout<<"Masukkan Kecepatan Tembak (m/second) = ";
  cin>>kecepatan;

  //menghitung jarak jatuh peluru
  rad = sudut * PHI / 180;
  jarak = 2 * pow(kecepatan, 2) * sin(rad) * cos(rad) / GRAVITASI;

  cout<<"Jadi, Peluru Jatuh pada Jarak = "<<jarak<<" meter"<<endl;
}
