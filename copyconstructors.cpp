#include<iostream>
using  namespace std;

class code{
    int id;
    public:
    code(){}
    code(int x){
        id = x;
    }    
    code(code &x){
        id = x.id;
    }
    void display(){
        cout<<id<<endl;
    }
};

int main(){
    code c1(10);
    code c2(c1);
    c1.display();
    return 0;
}