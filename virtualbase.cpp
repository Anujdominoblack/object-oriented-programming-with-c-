#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void get_number(int a){
        roll_number = a;
    }
    void put_number(){
        cout<<"the roll number is "<<roll_number;
    }
};

class test:virtual public student{
    protected:
    float part1,part2;
    public:
    void get_marks(float x,float y){
        part1 = x;
        part2 = y;
    } 
    void put_marks(){
        cout<<"the marks obtained are "<<part1<<" "<<part2<<endl;
    }
};

class sports : virtual public student{
   protected:
   float score;
   public:
   void get_score(float a){
    score = a;
    cout<<"score is "<<score<<endl;
   }

};

class result : public test,public sports{
    float total;
    public:
    void display(){
        cout<<"the total is "<<part1+part2<<endl;
    }
};

int main()
{
    result r;
    r.get_number(10);
    r.put_number();
    r.get_marks(20.0,30.0);
    r.put_marks();
    r.get_score(10.0);
    r.display();
    return 0;

}