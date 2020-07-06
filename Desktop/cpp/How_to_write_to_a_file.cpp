#include<iostream>
#include<fstream>
using namespace std;

int main() {
	fstream some_file;
	some_file.open("some_file.txt",ios::out);
	if(!some_file) {
		cout<<"Fail !"<<"\n";
	}
	
	else {
		cout<<"File created" <<"\n";
		some_file<<"cpp is awesome"<<"\n";
		some_file.close();
	}
	return 0;
}
