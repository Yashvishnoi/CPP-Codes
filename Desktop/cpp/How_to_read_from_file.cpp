#include<iostream>
#include<fstream>
using namespace std;

int main() {
	fstream some_file;
	some_file.open("some_file.txt", ios::in);
	// in is used to read from a file
	
	return 0;
}
