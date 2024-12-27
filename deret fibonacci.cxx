#include <iostream>
using namespace std;

int main(){
    int f1= 10;
 int f2=11;
 int fn;
 
 for (int reina=90; reina <=100; reina++){
     fn=f1+f2;
     cout<<fn<<",";
     f1=f2;
     f2=fn;
 }
}