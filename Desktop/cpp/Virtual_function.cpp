#include<iostream>
using namespace std;

class Base {
	public:
		int varBase = 1;
		virtual void display() {
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
	Base b_object;
	Derived d_object;
	
	b_pointer=&d_object;
	b_pointer->display();
	return 0;
}
