#include<iostream>
using namespace std;

class construct{
    private:
        int a,b;
     
    public:
        construct(int x, int y){
            a=x;
            b=y; 

        }

        //copy constructor

        construct(const construct &p2){
            a=p2.a;
            b=p2.b;
        }
        int getX(){
            return a;
        }

        int getY(){
            return b;
        }
};

int main(){
    construct p1(10,15);//normal constructor
    construct p2=p1;//copy constructor

//accesss the assigned value
cout<<"p1.a ="<<p1.getX()<<"p1.b="<<p1.getY();
cout<<"p2.a ="<<p2.getX()<<"p2.b="<<p2.getY();

return 0;

}