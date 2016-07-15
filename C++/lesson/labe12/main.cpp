#include <cstdlib>
#include <iostream>
#include "complex.h"

using namespace std;

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

