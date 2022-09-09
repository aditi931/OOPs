#include<iostream>
using namespace std;

class construct {
    public :
        int a,b;

        //default constructor
       construct(){
        a=10;
        b=20;

}
};

int main(){
    //default Constructor is called automatically
    // when obj is created

    construct c;
    cout<< "a:"<<c.a<< endl<<"b:"<<c.b;
    return 0;
}

//Default constructor as created by the compiler:

// class Class_name(){
//     public: Class_name(){}
// }