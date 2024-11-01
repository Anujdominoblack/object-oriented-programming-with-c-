#include<iostream>
using namespace std;

class item{
    int number;
    float cost;
    public:
    void getdata(int a,float b){
        number = a;
        cost = b;
    } 
    void putdata(){
        cout<<"the number is :"<<number<<endl;
        cout<<"the cost is : "<<cost<<endl;
    }

};

int main(){
    item x;
    x.getdata(10,20);
    x.putdata();
    return 0;
}

