#include<iostream>
using namespace std;

void xHandler( int x) {
	try {
		if(x) throw(x) ; 
		
	}
	catch (int i) {
		cout<<"Caught exeption # " << i <<" \n";
	}
}
int main( ){
	cout<<"Start"<<"\n";
	xHandler(1);
	xHandler(2);
	xHandler(3);
	xHandler(0);
	xHandler(8);
	return 0;
}
