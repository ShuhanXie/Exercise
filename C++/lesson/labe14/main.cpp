#include <cstdlib>
#include <iostream>
#include "complex.h"

using namespace std;

int main(int argc, char *argv[])
{
    complex c1(2,3);
    complex c2(c1);
    complex c3;
    
    cout<<"c1 = "; c1.show(); cout<<endl;    
    cout<<"c2 = "; c2.show(); cout<<endl;   
    cout<<endl; 

    c3=c1.add(c2);    
    cout<<"c1 + c2 = "; c3.show(); cout<<endl;
    
    c3=c1.sub(c2);    
    cout<<"c1 - c2 = "; c3.show(); cout<<endl;
    
    c3=c1.mul(c2);    
    cout<<"c1 * c2 = "; c3.show(); cout<<endl;
    
    c3=c1.div(c2);    
    cout<<"c1 / c2 = "; c3.show(); cout<<endl;

    c3=c1.add(2);    
    cout<<"c1 + 2 = "; c3.show(); cout<<endl;
    
    c3=c1.sub(2);    
    cout<<"c1 - 2 = "; c3.show(); cout<<endl;
    
    c3=c1.mul(2);    
    cout<<"c1 * 2 = "; c3.show(); cout<<endl;
    
    c3=c1.div(2);    
    cout<<"c1 / 2 = "; c3.show(); cout<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
