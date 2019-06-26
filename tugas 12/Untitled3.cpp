#include <iostream>

using namespace std;

int main() {
  int X;
  float Y;
  
  X = +5 // Dapat ditulis dengan X = 5,
  		 // yang berarti memasukkan nilai positif 5
  ;Y = -2.12; // Memasukkan nilai negatif 2.12
  
  // menampilkan nilai
  // yang disimpan dalam variabel X dan Y
  cout<<"nilai X : "<<X<<endl;
  cout<<"nilai Y : "<<Y<<endl;
  
  X = -X;      //mengubah nilai X menjadi negatif
  Y = -Y;
  
  //menampilkan kembali nilai yang disimpan
  //dalam variabel X dan Y
  cout<<"nilai X : "<<X<<endl;
  cout<<"nilai Y : "<<Y<<endl;
  
  return 0;
}
