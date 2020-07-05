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
};

int main() {
	loc ob1, ob2;
	ob1.set(10,20);
	ob1.get();
	ob2.set(2,4);
	ob2.get();
	return 0;
}
