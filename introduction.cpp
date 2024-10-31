#include<iostream>
using namespace std;

// writing the first oops programme
class first{
    public:
    int a,b;
    void get(int x,int y){
       a=x;
       b=y;
    }
    void addition(){
        cout<<"the result of addition is : "<<a+b<<endl;
    }
};
// obeject and driver code
int main(){
    first f;
    f.get(10,20);
    f.addition();
    return 0;
}