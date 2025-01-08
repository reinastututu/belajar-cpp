#include <iostream>
using namespace std;

int main(){
    int susu =10000;
    int kapalapi = 5000;
    int kopisusu = 5000;
    int udut = 50000;
    int jumlahsusu,jumlahkapalapi,jumlahkopisusu,jumlahudut;
    
    int total;
    cout<<"harga susu " <<susu<<endl;
    cin>>jumlahsusu;
    cout <<"harga kapalapi"<<kapalapi<<endl;
    cin>>jumlahkapalapi;
    cout<<"kopisusu"<<kopisusu<<endl;
     cin>>jumlahkopisusu;
    cout<<"harga udut"<<udut<<endl<<endl;
    cin>>jumlahudut;
    
    
    total =(susu*jumlahsusu)+(kapalapi*jumlahkapalapi)+(kopisusu*jumlahkopisusu)+(udut*jumlahudut);
    cout<<"total pembelian adalah"<<total;
    
    return 0;
}