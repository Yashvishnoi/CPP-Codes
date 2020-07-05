#include<iostream>
using namespace std;

class loc {
	int a,b;
	public:
		loc() {}
		loc (int x, int y){
			a=x;
			b=y;
		}
		void get( ) {
			cout<<"The value of a is : "<<a<<endl;
			cout<<"The value of b is : "<<b<<endl;
		}
		loc operator+(loc ob2);
		loc operator=(loc ob2);
};

loc loc::operator+(loc ob2 ){
	loc temp;
	
	temp.a=ob2.a+a;
	temp.b=ob2.b+b;
	return temp;
}

loc loc::operator=(loc ob2) {
	a=ob2.a;
	b=ob2.b;
	return *this ;// retrun object that generated call
}

int main() {
	loc ob1(10,20), ob2(2,4),ob3;

	ob1.get();

	ob2.get();
	ob3=ob1+ob2;
	ob3.get();
	
	ob3=ob2;
	ob3.get();
	return 0;
}
