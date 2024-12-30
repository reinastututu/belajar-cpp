#include <iostream>
#include <cmath>
#include <string>
int main()
{
    float a,b,hasil;
    std::string ulang;
    char operasi;
  std::cout<<"waktunya menghitung" <<std::endl;
 
     
    
  do{  std::cout<<"pilih operator\n";
  std::cin>>operasi;
  if (operasi== '+'){
   std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    std::cout << "masukkan nilai kedua=";
    std::cin >> b;
  hasil = a+b;
  
   
   std::cout << "=" << hasil;
  }
 
       
  else if (operasi== '-'){
  std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    std::cout << "masukkan nilai kedua=";
    std::cin >> b;
     hasil = a-b;
   
   std::cout << "=" << hasil;
  }
       
else  if (operasi== '/'){
   std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    std::cout << "masukkan nilai kedua=";
    std::cin >> b;
    hasil = a/b;
   
   std::cout << "=" << hasil;
  }
       
 else if (operasi== '*'){
   std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    std::cout << "masukkan nilai kedua=";
    std::cin >> b;
    hasil = a*b;
   
   std::cout << "=" << hasil;
  }

  else  if (operasi=='^'){
     std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    std::cout << "masukkan nilai kedua=";
    std::cin >> b;
        hasil = pow(a,b);
      std::cout << "=" <<hasil;
  }
  else if (operasi=='r'){
      std::cout << "masukkan nilai pertama=";
    std::cin >> a;
    
       hasil = sqrt(a);
      std::cout <<"=" <<hasil;
} std::cout <<"ulangi proses(y/n" <<std::endl;
std::cin>>ulang;
  } while(ulang =="y");
  std::cout<<"kelar beb"<<std::endl;
}
   