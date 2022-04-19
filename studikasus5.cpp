#include <iostream>
using namespace std;
class SKS {
public:
  void rekursif(int);
private:
  int nim,jumlahsks,totalp,i,hsl,hsl2,hsl3,totalp2,totalp3;
  char nama[50],matkul[200];
};

void SKS::rekursif(int n){
  if( 1 <= n){
  cout<<"Masukkan Nama  : ";cin>>nama;
  cout<<"Masukkan NIM  :";cin>>nim;
  cout<<"Masukkan Jumlah SKS  : ";cin>>jumlahsks;
  cout<<"Masukkan daftar Mata Kuliah  : ";cin>>matkul;
  totalp=jumlahsks*120000;
  hsl=totalp*0.1;
  totalp2=totalp-hsl;
  hsl2=totalp2*0.05;
  totalp3=totalp2-hsl2;
  cout<<"\nTotal Pembayaran : "<<totalp<<endl;
    
  cout<<"Diskon 10% : "<<hsl<<endl;
  cout<<"Diskon 5% : "<<hsl2<<endl;
  cout<<"\nTotal Pembayaran Akhir: "<<totalp3<<endl;
  cout<<endl;
  
  rekursif(n-1);

    }
  
}

int main() {
  int a;
  cout<<"Masukkan Jumlah Mahasiswa : ";cin>>a;
  SKS x;
  x.rekursif(a);
  return 0;
}
