#include<iostream>
using namespace std;

class M{
    protected:
    int m;
    public:
    void get_m(int a){
        m=a;
    }
};

class N{
    protected:
    int n;
    public:
    void get_n(int b){
        n = b;
    }
};

class P:public M,public N{
    protected:
    int p;
    public:
    void get_p(int c){
        p = c;
    }
    void total(){
        cout<<"the total is "<<p+m+n<<endl;
    }
};

int main(){
    P p;
    p.get_m(10);
    p.get_n(20);
    p.get_p(50);
    p.total();
    P q;
    q.get_m(20);
    q.get_p(20);
    q.get_n(20);
    q.total();
    return 0;
}