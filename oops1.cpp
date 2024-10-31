#include<iostream>
using namespace std;

class marks{
    int sub1,sub2;  // here this is private means object cant access it 
    public:
    int z = 10;   // it will be accessible by object directly
    void get(int x,int y){
        sub1 = x;
        sub2 = y;
    }
    void addition(){
        cout<<"the result of addition is : "<<sub1+sub2<<endl;
    }
};
// driver code
int main(){
    marks m1;
    m1.get(50,60);
    m1.addition();
    cout<<m1.z<<endl;
    return 0;
}