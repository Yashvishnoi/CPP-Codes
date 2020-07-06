#include<iostream>
#include<fstream>

using namespace std;

int main() {
	fstream some_file;
	some_file.open("some_file.txt" , ios::out);
	
	// "ios::out" to write in file
	// use open() function
	
	if(!some_file) {
		cout<<"FAIL ! "<<"\n";
	}
	else {
		cout<<"File created" <<"\n";
		some_file.close();
	// file creation completed
	}
	
	return 0;
}
