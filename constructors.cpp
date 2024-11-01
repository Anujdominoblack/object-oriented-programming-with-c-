// example of paramtereized constructors
#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a,int b){
        x =a ;
        y = b;
    }
    void display(){
        cout<<"the values of x and y are :"<<x<<" "<<y<<endl;
    }
};

int main(){
    point p1(100,200);
    p1.display();
    point p2(400,600);
    p2.display();
    return 0;
}
