#include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void get_number(int a){
        roll = a;
    }
    void put_number(){
        cout<<"the roll number is : "<<roll<<endl;
    }
};

class test: public student{
    protected:
    float sub1;
    float sub2;
    public:
    void get_amrks(float a,float b){
        sub1 = a;
        sub2 = b;
    }
    void put_marks(){
        cout<<"the marks in the subject is "<<sub1<<" "<<sub2;
    }
};

class result : public test{
    public:
    void total(){
        cout<<"the total marks in "<<sub1+sub2<<endl;
    }
};

int main(){
    result r;
    r.get_number(10);
    r.put_number();
    r.get_amrks(25.0,39.0);
    r.put_marks();
    r.total();
    return 0;

}