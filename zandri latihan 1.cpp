#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ofstream output;
	
	output.open("D:/LATIHAN 1.doc");
	if(!output) {
		cout<<"cant open the file"<<endl;
		return 1;
	}
	
	output<<"X TI3"<<endl;
	output<<"NAME      : SYUKRIATUL ZANDRI"<<endl;
	output<<"SI        : 170700806"<<endl;
	output<<"ADDRESS   : LIMBANANG"<<endl;
	output<<"PHONE NO  : 082268916913"<<endl;
	output<<"E-MAIL    : Zandri081@gmail.com"<<endl;
	
	output.close();
	
	return 0;
}
