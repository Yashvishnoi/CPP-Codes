#include<iostream>
#include<fstream>
using namespace std;

int main() {
	fstream some_file;
	some_file.open("some_file.txt", ios::in);
	// in is used to read from a file
	
	if(!some_file) {
		cout<<"Fail"<<"\n";
	}
	
	else {
		char read_file;
		while (!some_file.eof()) {
			some_file>>read_file;
			cout<<read_file;
			
		}
	}
	return 0;
}
