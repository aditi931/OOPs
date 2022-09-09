#include<bits/stdc++.h>
using namespace std;


classs construct{
    public:
       int a,b;

       //parametrized constructor
       construct(int x, int y){
        a=x;
        b=y;
       }


};

int main(){
    construct c(40,50);
    cout<<"a:"<<c.a<<endl<<"b:"<<c.b;
    return 0;
}