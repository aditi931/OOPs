#include<iostream>
using namespace std;

class construct {
    public:
       float area;
       //cons with no para
       construct(){
        area=0;
       }
       //cons with two para
       construct(int a, int b){
        area = a*b;
       }
       void disp(){
        cout<< area<< endl;
       }
};

int main(){
    //cons overloading
    construct o;
    construct o2(10,20);
    cout<<"Area using default constructor: ";o.disp();
    cout<<"Area using default constructor: ";o2.disp();

    return 0;

}