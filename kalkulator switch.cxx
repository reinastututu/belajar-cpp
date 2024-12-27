#include <iostream>
#include <cmath>

int main(){
    float a,b,hasil;
    char operasi;
    
    std::cout<<"pilih operasi yg kan dijalankan" <<std::endl;
 std::cin>> operasi;
   
   switch(operasi)
   {
   
        case '+':
       std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      std::cout<<" masukkan nilai b" <<std::endl;
      std::cin>>b;
      hasil = a+b;
      std::cout<<hasil;
      break;
      
      case '-':
         std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      std::cout<<" masukkan nilai b" <<std::endl;
      std::cin>>b;
      hasil = a-b;
      std::cout<<hasil;
      break;
      
    case '/':
       std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      std::cout<<" masukkan nilai b" <<std::endl;
      std::cin>>b;
      hasil =a/b;
      std::cout<<hasil;
      break;
      
        case '*':
       std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      std::cout<<" masukkan nilai b" <<std::endl;
      std::cin>>b;
      hasil =a*b;
      std::cout<<hasil;
      break;
      
        case '^':
       std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      std::cout<<" masukkan nilai b" <<std::endl;
      std::cin>>b;
      hasil =pow(a,b);
      std::cout<<hasil;
      break;
      
        case 's':
       std::cout <<"masukan nilai" <<std::endl;
       std::cin>>a;
      hasil =sqrt(a);
      std::cout<<hasil;
      break;
      default: std::cout<<"salah pea";
      }
return 0;
}