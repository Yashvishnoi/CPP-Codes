#include<iostream>
using namespace std;

class loc {
	int a,b;
	public:
		void set(int x, int y){
			a=x;
			b=y;
		}
		void get( ) {
			cout<<"The value of a is : "<<a<<endl;
			cout<<"The value of b is : "<<b<<endl;
		}
		loc operator+(loc ob2);
};

loc loc::operator+(loc ob2 ){
	loc temp;
	
	temp.a=ob2.a+a;
	temp.b=ob2.b+b;
	return temp;
}
int main() {
	loc ob1, ob2,ob3;
	ob1.set(10,20);
	ob1.get();
	ob2.set(2,4);
	ob2.get();
	ob3=ob1+ob2;
	ob3.get();
	return 0;
}
