#include<iostream>
using namespace std;

class Complex {
    int a,b;
    
    public:
        void set(int A,int B){
            a=A;
            b=B;
        }
        void get(){
            cout<<"The value of and b is : "<<a<<" & "<<b<<"\n";
        }
};

int main() {
    Complex *ptr = new Complex;
    ptr->set(5,20); // we can both ways 
    (*ptr).get();
    return 0;
}
