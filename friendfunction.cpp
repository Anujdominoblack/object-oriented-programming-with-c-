#include<iostream>
using namespace std;

class sample{
    int a;
    int b;
    public:
    void setvalue(){    
        a=25;
        b=20;
    }
    friend float mean (sample s);  // friend function declaration 
};

float mean(sample s){
    return float(s.a+s.b)/2.0;   // friend function defination
}

int main(){
    sample x;
    cout<<"the mean vbalue is "<<mean(x)<<endl;  // values are not set garbage throw
    x.setvalue();
    cout<<"the mean value is "<<mean(x)<<endl;  // values are set real throw 
    return 0;
}