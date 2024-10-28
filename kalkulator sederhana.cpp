#include <iostream>

int main()
{
    float a,b,hasil;
    char operasi;
     std::cout<<"waktunya menghitung" <<std::endl;
     std::cout << "masukkan nilai pertama=";
     std::cin >> a;
     std::cout <<"masukkan nilai kedua=";
     std::cin >> b;
     std::cout << "pilih operator *"<< std::endl;
    std::cin >> operasi;
     
    
     
  if (operasi== '+'){
   hasil = a+b;
   
   std::cout << "=" << hasil;
  }
       
  if (operasi== '-'){
   hasil = a-b;
   
   std::cout << "=" << hasil;
  }
       
  if (operasi== '/'){
   hasil = a/b;
   
   std::cout << "=" << hasil;
  }
       
  if (operasi== '*'){
   hasil = a*b;
   
   std::cout << "=" << hasil;
  }
  }