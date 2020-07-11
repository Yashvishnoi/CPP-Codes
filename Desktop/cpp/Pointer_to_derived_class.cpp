#include<iostream>
using namespace std;

class Base {
	public:
		int varBase = 1;
		void display() {
			cout<<"Base class variable varBase "<<varBase<<"\n";
	}
};

class Derived : public Base {
	public:
		int varDerived = 2; 
		void display() {
			cout<<"Base class variable varBase "<<varBase<<"\n";
			cout<<"Derived class variable varDerived "<<varDerived <<"\n";
		}
};

int main() {
	Base *b_pointer ;
	Derived d_object;
	
	b_pointer=&d_object;
	b_pointer->display();
	Derived *d_pointer;
	d_pointer = &d_object;
	d_pointer->varDerived = 91;
	d_pointer->display();
	
	return 0;
}
