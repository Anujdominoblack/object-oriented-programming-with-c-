#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"i'm displaying a base class "<<endl;
    }
    virtual void show(){
        cout<<"virtual of base class "<<endl;
    }
};

class derived : public Base{
    public:
     void display(){
        cout<<"it is is the display derived "<<endl;
     }
     void show(){
        cout<<"derived class "<<endl;
     }
};

int main(){
    Base b;
    derived d;
    
    Base *ptr;
    ptr = &b;
    ptr->display();
    ptr->show();
    ptr = &d;
    ptr->display();
    ptr->show();
    return 0;
}