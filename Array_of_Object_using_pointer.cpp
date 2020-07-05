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
    Complex *ptr = new Complex[2];
    Complex *ptrTemp=ptr;
    int p,q,i;
    for(i=0;i<2;i++) {
        cout<<"Enter the value of a and b "<<i+1<<"times"<<endl;
        cin>>p>>q;
        ptr -> set(p,q);
        ptr++;
    }
     for( i=0;i<2;i++) { 
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->get();
        ptrTemp++;
     }
    return 0;
}
