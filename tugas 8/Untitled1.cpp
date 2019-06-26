#include <iostream>

using namespace std;

int main () {
	int BIL;
	long faktorial = 1;
	
	cout<<"6: ";
	cin>>BIL;
	int C = BIL;
	cout<<C<<"! = ";
	while (C >= 1) {
		faktorial *= C;   // fsaktorial = faktorial * C;
		if (C != 1) {
		  cout<<C<<" x ";
		} else {
		  cout<<C<<" = ";
		}
		C--;       // menurut nilai variabel c
	}
	cout<<faktorial;
	
	return 0;
}
