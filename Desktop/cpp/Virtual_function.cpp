#include<iostream>
using namespace std;

class Base {
	int varBase;
	public:
		void display() {
			cout<<"Base class variable varBase "<<varBase<<"\n";
			}
};

class Derived : public Base {
	int varDerived ; 
	public :
		void display() {
			cout<<"Base class variable varBase "<<varBase<<"\n";
			cout<<"Derived class variable varDerived "<<varDerived <<"\n";
		}
};

int main() {
	
	return 0;
}
