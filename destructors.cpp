#include<iostream>
using namespace std;

int count=0;
class test{
    public:
    test(){
        count++;
        cout<<"the obejct count is "<<count<<endl;
    }
    ~test(){
        cout<<"the destrutor is called "<<count<<endl;
    }
};

int main(){
    cout<<"inside the main block "<<endl;
    cout<<"the first obejct "<<endl;
    test t1;
    {
        cout<<" insdie the block 1"<<endl;
        cout<<"obejct t2 and t3 "<<endl;
        test t2,t3;
        cout<<"leaving block"<<endl;
    }
    cout<<"block ll=main leave"<<endl;
    return 0;
}