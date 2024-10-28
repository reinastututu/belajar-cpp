#include <iostream>
#include <math.h>

int main()
{
    int panjang;
    int lebar;
    float phi = 3.14;
    int jari_jari;
    int memilih;
    
   std::cout <<"masukkan nilai panjang=";
   std::cin >> panjang;
   std::cout <<"masukkan nilai lebar=";
       std::cin >> lebar;
       std::cout <<"pilih operasi yg akan dijalankan \n";
       
       std::cout << "1. menghitung luas lingkaran \n";
       std::cout << "2. menghitung luas persegi panjang \n";
     std::cin >> memilih;
     
      if (memilih == 1)
      {
          std::cout <<"masukkam jari jari";
          std::cin >> jari_jari;
          int luas_lingkaran = phi * jari_jari * jari_jari;
          std::cout << "hasilnya adalah" << luas_lingkaran;
    }
    if (memilih == 2)
    {
        int luas_persegi_panjang = panjang * lebar; std::cout << "hasilmya adalah" <<luas_persegi_panjang;
     } 
    }