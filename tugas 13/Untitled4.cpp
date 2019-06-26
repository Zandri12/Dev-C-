#include <iostream>

using namespace std;

int main() {
	
	int C;       // mendeklarasikan variabel C
	
	// Mengisikan nilai ke dalam variabel  C
	// dengan nilai 5
	C = 5;
	
	// Melakukan pre-increment
	cout<<"Nilai C awal         : "<<C<<endl;
	cout<<"nilai ++C            : "<<++C<<endl;
	cout<<"nilai C akhir : "<<C<<endl;
	cout<<'\n';
	
	// mengubah nilai yang terdapat dalam variabel C
	// dengan nilai 10
	C = 10;
	
	// melakukan post-increment
	cout<<"nilai C awal         : "<<C<<endl;
	cout<<"nilai C++            : "<<C++<<endl;
	cout<<"nilai C akhir : "<<C<<endl;
	
	return 0;
}
