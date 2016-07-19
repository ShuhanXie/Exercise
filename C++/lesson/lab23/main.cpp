#include <cstdlib>
#include <iostream>

using namespace std;

class A {
    public:
        
        A() : pub(0),pro(0), pri(0) {}
        
        int pub;
        
        // make everyone can READ pri and pro
        //
        int getPri() {
            return pri;
        }
        
        int getPro() {
            return pro;
        }
        
    protected:
        int pro;
        
        // let derived class B can access (READ/WRITE) pri
        //
        void setPri(int v) {
            if (pri>0)
                pri=v;
        }
        
    private:
        int pri;
};

class B : public A {
    public:
        B() : A() {}
        B()	: setPri(){}

};


int main(int argc, char *argv[])
{
    A objA;
    
    objA.pub=5;
     
    cout<<objA.pub<<endl;
    cout<<objA.getPri()<<endl;
    cout<<objA.getPro()<<endl;
    
    B objB;
    
    objB.pub=6;
    
    cout<<objB.pub<<endl;
    cout<<objB.getPri()<<endl;
    cout<<objB.getPro()<<endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
