#include <iostream>
#include <math.h>

int main()
{
   
    float phi = 3.14;
    int  jari_jari;
    
    std::cout << "masukkan jari-jari:";
    std::cin >> jari_jari;
    
    int luas_lingkaran = phi * jari_jari* jari_jari;
     std::cout <<"hasil dari luas lingkaran adalah:" << luas_lingkaran;
}