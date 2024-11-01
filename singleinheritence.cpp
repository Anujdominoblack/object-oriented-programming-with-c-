#include<iostream>
using namespace std;

class B{
    int a;  // private not inheritable
    public:
     int b;
     void setab(){
        a=5;
        b=10;
     }
     int geta(){
        return a;
     }
     void show_a(){
        cout<<"the value of a is "<<a<<endl;
     }
};
class C:public B{
    int d;
    public:
    void mul(){
         d = b*geta();
    }
    void show_d(){
        cout<<"the value of d is "<<d<<endl;
    }
};
// driver code
int main(){
C d;
d.setab();
cout<<d.geta()<<endl;
d.show_a();
d.mul()
;d.show_d();
return 0;
}