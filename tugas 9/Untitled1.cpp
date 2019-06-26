#include <iostream>

using namespace std;

int main() {
	int J = 10;
	int K;
	
	do {
		K = 1;
		do {
		  cout<<K*J<<' ';
		  K++;
		} while (K <= J);
		cout<<'\n';
		J--;
	} while (J >= 1);
	
	return 0;
}
