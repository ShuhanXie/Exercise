#include <cstdlib>
#include <iostream>

using namespace std;

class complex {
    
    private:
        double real;
        double img;
    
    public:
        
        // constructors
        //
        complex();
        
        complex(double r, double i) {
            real=r;
            img=i;
        }
        
        // copy constructor
        complex(const complex &c){
            real=c.real;
            img=c.img;
        }
        
        void setR(double r);
        
        void setI(double i){
            img=i;
        }  
        
        void show() {
            if (real==0)
                if (img==0)
                    cout<<0;
                else
                    cout<<img<<"j";
            else {
                cout<<real;
                if (img>0)
                    cout<<" + "<<img<<"j";
                else if (img<0)
                    cout<<" - "<<-img<<"j";
            }       
        }        
};

complex::complex() {
    real=0;
    img=0;
}

void complex::setR(double r){
    real=r;
}



int main(int argc, char *argv[])
{
    complex c1(2,3);
    complex c2(c1);
    complex c3;
    
    c3.setR(4);
    c3.setI(5);
    
    c1.show(); cout<<endl;    
    c2.show(); cout<<endl;    
    c3.show(); cout<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
